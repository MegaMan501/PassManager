#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QWidget::setWindowTitle("Log into passManager");
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_exit_clicked()
{
    QCoreApplication::quit();
}

void Login::on_pushButton_login_clicked()
{
    password = ui->lineEdit_password->text();

    // test the connection
    if(!openDB()){
        QMessageBox::critical(this,tr("Missing Accounts Database"),
                                       tr("Cannot Log into Password Manager, since accounts.db has been deleted"),
                                       QMessageBox::Ok);
        QCoreApplication::quit();
    }
    openDB();

    // log into the database
    QSqlQuery qry(db);
    qry.exec("pragma key='"+password+"';");

    // test the connection
    qry.prepare("select * from accounts");
    if(qry.exec()) {
        qDebug() << "Successfully logged into accounts.db";
        db.close();
        this->close(); // close the dialog
    } else {
        qDebug() << "Failed to log into accounts.db";
        db.close();
        QMessageBox::critical(this,tr("Incorrect Password"),
                                         tr("Incorrect password entered. Try again."),
                                         QMessageBox::Ok);
        return;
    }
}
