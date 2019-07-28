#include "manager.h"
#include "ui_manager.h"

Manager::Manager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Manager)
{
    ui->setupUi(this);

    const QString path = QStandardPaths::locate(QStandardPaths::HomeLocation, "accounts.db");
    QFileInfo dbFile(path);

    // Check if database file exists
    if (!dbFile.exists())
    {
        // Create new registeration dialog
        reg = new Register(this);
        reg->setModal(true);
        reg->show();

        // move registration screen to center
        move(reg->window()->frameGeometry().topLeft()
             +reg->window()->rect().center()
             -rect().center());
    } else {
        // Create new login dialog
        log = new Login(this);
        log->setModal(true);
        log->show();

        // move login screen to center
        move(log->window()->frameGeometry().topLeft()
             +log->window()->rect().center()
             -rect().center());
    }
}

Manager::~Manager()
{
    delete ui;
}

void Manager::on_pushButton_save_clicked()
{
    acc = ui->lineEdit_acc->text();
    user = ui->lineEdit_user->text();
    pass = ui->lineEdit_pass->text();
    comment = ui->textEdit_comments->toPlainText();

    if(!log->openDB()) {
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                              tr("Cannot Log into Password Manager,"
                                 "\n since accounts.db has been deleted or moved."),
                              QMessageBox::Ok);
        QCoreApplication::quit();
    }
    log->openDB();

    // prepare insert query
    QSqlQuery qry;
    qry.exec("pragma key='"+log->password+"';");
    qry.prepare("insert into accounts (account,username,password,comment)"
                " values('"+acc+"','"+user+"','"+pass+"','"+comment+"');");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Save"),tr("saved"));
        log->closeDB();
        on_pushButton_load_clicked();
    }
    else {
        QMessageBox::critical(this,tr("Save Failed"),tr("Please make sure the data you have entered is correct."
                                                        "Duplicate accounts are not allowed."));
        qDebug() << qry.lastError().text();
    }
}

void Manager::on_pushButton_update_clicked()
{
    acc = ui->lineEdit_acc->text();
    user = ui->lineEdit_user->text();
    pass = ui->lineEdit_pass->text();
    comment = ui->textEdit_comments->toPlainText();

    if(!log->openDB()) {
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                              tr("Cannot Log into Password Manager,"
                                 "\n since accounts.db has been deleted or moved."),
                              QMessageBox::Ok);
        QCoreApplication::quit();
    }

    // prepare update query
    QSqlQuery qry;
    qry.exec("pragma key='"+log->password+"';");
    qry.prepare("update accounts set account='"+acc+"'"
                   ", username='"+user+"',password='"+pass+"',comment='"+comment+"' where account='"+acc+"';");

    // update
    if(qry.exec())
    {
        QMessageBox::information(this,tr("Updated"),tr("updated"));
        log->closeDB();
        on_pushButton_load_clicked();
    }
    else {
        QMessageBox::critical(this,tr("Update Failed"),tr("Please make sure the data you have entered is correct.\n"
                                                          "Duplicate accounts are not allowed."));
        qDebug() << qry.lastError().text();
    }
}

void Manager::on_pushButton_delete_clicked()
{
    acc = ui->lineEdit_acc->text();
    user = ui->lineEdit_user->text();
    pass = ui->lineEdit_pass->text();
    comment = ui->textEdit_comments->toPlainText();

    if(!log->openDB()) {
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                              tr("Cannot Log into Password Manager,"
                                 "\n since accounts.db has been deleted or moved."),
                              QMessageBox::Ok);
        QCoreApplication::quit();
    }

    QSqlQuery qry;
    qry.exec("pragma key='"+log->password+"';");
    qry.prepare("delete from accounts where account='"+acc+"';");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Deleted"),tr("deleted"));
        log->closeDB();
        on_pushButton_load_clicked();
    }
    else {
        QMessageBox::critical(this,tr("Delete Failed"),tr("Please make sure the data you have entered is correct.\n"
                                                          "This account does not exist."));
        qDebug() << qry.lastError().text();
    }
}

void Manager::on_tableView_activated(const QModelIndex &index)
{
    QString val = ui->tableView->model()->
            index(index.row(),0,QModelIndex()).data().toString();   // get the account

    if(!log->openDB()) {
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                              tr("Cannot Log into Password Manager,"
                                 "\n since accounts.db has been deleted or moved."),
                              QMessageBox::Ok);
        QCoreApplication::quit();
    }

    QSqlQuery qry;
    qry.exec("pragma key='"+log->password+"';");
    qry.prepare("select * from accounts where account='"+val+"';");


    if(qry.exec()) {
        while (qry.next()) {
          // skip the id
           ui->lineEdit_acc->setText(qry.value(1).toString());
           ui->lineEdit_user->setText(qry.value(2).toString());
           ui->lineEdit_pass->setText(qry.value(3).toString());
           ui->textEdit_comments->setText(qry.value(4).toString());
        }
        log->closeDB();
    } else {
        qDebug() << qry.lastError().text();
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void Manager::on_actionexit_triggered()
{
    QCoreApplication::quit();
}

void Manager::on_pushButton_load_clicked()
{
    QSqlQueryModel * model = new QSqlQueryModel;

    if(!log->openDB()) {
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                              tr("Cannot Log into Password Manager,"
                                 "\n since accounts.db has been deleted or moved."),
                              QMessageBox::Ok);
        QCoreApplication::quit();
    }

    QSqlQuery * qry = new QSqlQuery(log->db);
    qry->exec("pragma key='"+log->password+"';");
    qry->prepare("select account,username,password,comment from accounts");

    // load the records from the database
    if(qry->exec()) {
        model->setQuery(*qry);
        ui->tableView->setModel(model);
        ui->tableView->resizeColumnsToContents();

        log->closeDB();
    } else {
        qDebug() << qry->lastError().text();
        QMessageBox::critical(this,tr("No Records Found"),
                              tr("There are no records in the database.\n"
                                 "Please save an account into the manager "
                                 "before loading the accounts."),
                              QMessageBox::Ok);
        return;
    }

}
