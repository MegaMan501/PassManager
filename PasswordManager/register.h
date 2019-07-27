#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include <QtSql>
//#include <QSqlDatabase>
//#include <QSqlQuery>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QStandardPaths>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase db;
    QString password;

    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_pushButton_register_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::Register *ui;

};

#endif // REGISTER_H
