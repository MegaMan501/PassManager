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

    // Initial connection
    Login conn;
    if(!conn.openDB()) {
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                              tr("Cannot Log into Password Manager,"
                                 "\n since accounts.db has been deleted or moved."),
                              QMessageBox::Ok);
        QCoreApplication::quit();
    }
}

Manager::~Manager()
{
    delete ui;
}

void Manager::on_pushButton_save_clicked()
{
    Login conn;
    id = ui->lineEdit_id->text();
    acc = ui->lineEdit_acc->text();
    user = ui->lineEdit_user->text();
    pass = ui->lineEdit_pass->text();
    comment = ui->textEdit_comments->toPlainText();

    if(id == "") {
        QMessageBox::warning(this,tr("Invalid ID"),tr("Not ID entered."));
        return;
    }

    if(id.toInt() == 1) {
        QMessageBox::warning(this,tr("Invalid ID"),tr("Cannot use 1 as an ID."));
        return;
    }

    if(!conn.openDB()) {
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                              tr("Cannot Log into Password Manager,"
                                 "\n since accounts.db has been deleted or moved."),
                              QMessageBox::Ok);
        QCoreApplication::quit();
    }

    QSqlQuery qry;
    qry.prepare("insert into accounts (id,account,username,password,comment)"
                " values('"+id+"','"+acc+"','"+user+"','"+pass+"','"+comment+"');");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Save"),tr("saved"));
        on_pushButton_load_clicked(); //conn.closeDB();
    }
    else {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void Manager::on_pushButton_update_clicked()
{
    Login conn;
    id = ui->lineEdit_id->text();
    acc = ui->lineEdit_acc->text();
    user = ui->lineEdit_user->text();
    pass = ui->lineEdit_pass->text();
    comment = ui->textEdit_comments->toPlainText();

    if(id.toInt() == 1) {
        QMessageBox::warning(this,tr("Invalid ID"),tr("Cannot use 1 as an ID"));
        return;
    }
    if(id.isEmpty()) {
        QMessageBox::warning(this,tr("No ID Povided"), tr("Try again."));
        return;
    }

    if(!conn.openDB()) {
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                              tr("Cannot Log into Password Manager,"
                                 "\n since accounts.db has been deleted or moved."),
                              QMessageBox::Ok);
        QCoreApplication::quit();
    }

    QSqlQuery qry;
    qry.prepare("update accounts set id='"+id+"',account='"+acc+"'"
                   ", username='"+user+"',password='"+pass+"',comment='"+comment+"' where id='"+id+"';");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Updated"),tr("updated"));
        on_pushButton_load_clicked(); // conn.closeDB();
    }
    else {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void Manager::on_pushButton_delete_clicked()
{
    Login conn;
    id = ui->lineEdit_id->text();
    acc = ui->lineEdit_acc->text();
    user = ui->lineEdit_user->text();
    pass = ui->lineEdit_pass->text();
    comment = ui->textEdit_comments->toPlainText();

    if(id.isEmpty()) {
        QMessageBox::warning(this,tr("No ID Povided"), tr("Try again."));
        return;
    }

    if(id.toInt() == 1) {
        QMessageBox::warning(this,tr("Invalid ID"),tr("Cannot use 1 as an ID"));
        return;
    }

    if(!conn.openDB()) {
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                              tr("Cannot Log into Password Manager,"
                                 "\n since accounts.db has been deleted or moved."),
                              QMessageBox::Ok);
        QCoreApplication::quit();
    }

    QSqlQuery qry;
    qry.prepare("delete from accounts where id='"+id+"';");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Deleted"),tr("deleted"));
        on_pushButton_load_clicked(); //conn.closeDB();
    }
    else {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void Manager::on_tableView_activated(const QModelIndex &index)
{
    Login conn;
    QString val=ui->tableView->model()->data(index).toString();

    if(!conn.openDB()) {
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                              tr("Cannot Log into Password Manager,"
                                 "\n since accounts.db has been deleted or moved."),
                              QMessageBox::Ok);
        QCoreApplication::quit();
    }

    conn.openDB();
    QSqlQuery qry;
    qry.prepare("select * from accounts where id='"+val+"' or account='"+val+"' or username='"+val+"' or password='"+val+"' or comment='"+val+"' ");
    if(qry.exec()) {
        while (qry.next()) {
           ui->lineEdit_id->setText(qry.value(0).toString());
           ui->lineEdit_acc->setText(qry.value(1).toString());
           ui->lineEdit_user->setText(qry.value(2).toString());
           ui->lineEdit_pass->setText(qry.value(3).toString());
           ui->textEdit_comments->setText(qry.value(4).toString());
        }
        conn.closeDB();
    } else {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void Manager::on_actionexit_triggered()
{
    QCoreApplication::quit();
}

void Manager::on_pushButton_load_clicked()
{
    Login conn;
    QSqlQueryModel * model = new QSqlQueryModel;

    conn.openDB();
    QSqlQuery * qry = new QSqlQuery(conn.db);

    qry->prepare("select id,account,username,password,comment from accounts LIMIT 5000 OFFSET 1");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);

    qDebug() << "Number of Rows in Table:";
    qDebug() << (model->rowCount());

    items=model->rowCount();
    conn.closeDB();
}
