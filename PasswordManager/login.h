#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
//#include <QSqlDatabase>
//#include <QSqlQuery>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QStandardPaths>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase db;
    QString password;
    const QString path = QStandardPaths::locate(QStandardPaths::HomeLocation, "accounts.db");

    bool openDB() {
        db = QSqlDatabase::addDatabase("QSQLCIPHER");
        db.setDatabaseName(path);

        if(!db.open())
            return false;
        return true;
    }

    void closeDB() {
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_exit_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
