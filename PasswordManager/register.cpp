#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);

    // Set the title
    QWidget::setWindowTitle("Register an account with passManager.");
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_register_clicked()
{
    QMessageBox msg;
    QString warning = "";
    QString confirm = ui->lineEdit_confirm->text();
    QString path = QStandardPaths::writableLocation(QStandardPaths::HomeLocation)+"/accounts.db";
    bool hasLower = false,
         hasUpper = false,
         hasDigit = false,
         hasSymbo = false;
    password=ui->lineEdit_password->text();

    // check the passward
    for ( const auto& c : password ) {
        if(c.isUpper()) hasUpper =true;
        if(c.isLower()) hasLower =true;
        if(c.isDigit() || c.isNumber()) hasDigit =true;
        if(c.isSymbol() || c.isPunct()) hasSymbo=true;
    }

    // Create the database
    if((hasLower && hasUpper && hasDigit && hasSymbo) && password.length() >= 8 && password == confirm)
    {
        // create the password manager database
        db = QSqlDatabase::addDatabase("QSQLITE");
        //db = QSqlDatabase::addDatabase("QSQLCIPHER", "db");
        db.setPassword(password); // lock the database with password
        db.setDatabaseName(path);

        // open database
        if(!db.open()) {
            qDebug() << ("Failed to open the database.");
            QMessageBox::critical(nullptr, QObject::tr("Cannot Open database"),
                                  QObject::tr("Unable to establish a database connection.\n"
                                              "This application needs SQLCipher support."));
            return;
        }

        // create the accounts table
        QSqlQuery qry(db);
        //qry.exec("PRAGMA key='"+password+"';"); // not used
        qry.exec("create table accounts (id integer primary key, "
                 "account varchar(30), username varchar(30), password varchar(30), comment varchar(50));");
        qry.exec("insert into accounts (account, username, password, comment) "
                 "values('passManager','admin','"+password+"','this is the master password for the database');");

        // close the db and the dialog
        db.close();
        this->close();
    } else { // display warning if password was not correct
        if(!hasUpper) warning+="Password is missing at least one uppercase character.\n";
        if(!hasLower) warning+="Password is missing at least one lowercase character.\n";
        if(!hasDigit) warning+="Password is missing at least one digit character.\n";
        if(!hasSymbo) warning+="Password is missing at least one symbol character.\n";
        if(password.length() < 8) warning+="Password needs to be 8 characters long.\n";
        if(password != confirm) warning+="Passwords DON'T Match, Try again.";
        msg.critical(this,tr("Password Invalid"),warning);
    }
}

void Register::on_pushButton_exit_clicked()
{
    QCoreApplication::quit();
    db.close();
}
