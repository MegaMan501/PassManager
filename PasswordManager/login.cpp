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
     QString password = ui->lineEdit_password->text();

     if(!openDB()) {
         QMessageBox::critical(this,tr("Missing Accounts Database"),
                               tr("Cannot Log into Password Manager, since accounts.db has been deleted"),
                               QMessageBox::Ok);
         QCoreApplication::quit();
     }

     openDB();  // open the database
     QSqlQuery qry(db);
     qry.prepare("select * from accounts where id='1' and username='admin' and password='"+password+"';");

     if(qry.exec()) {
        int count=0;
        while (qry.next()) count++;
        if(count==1) {
            qDebug() << "success";
            closeDB();
            this->close();
        } else {
            QMessageBox::critical(this,tr("Incorrect Password"),
                                  tr("Incorrect password entered. Try again."),
                                  QMessageBox::Ok);
            return;
        }
     }
}
