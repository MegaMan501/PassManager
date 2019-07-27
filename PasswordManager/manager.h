#ifndef MANAGER_H
#define MANAGER_H

#include <QMainWindow>
#include <QtSql>
//#include <QSqlDatabase>
//#include <QSqlQuery>
#include <QtDebug>
#include <QFileInfo>
#include <QStandardPaths>
#include <QMessageBox>
#include "register.h"
#include "login.h"

namespace Ui {
class Manager;
}

class Manager : public QMainWindow
{
    Q_OBJECT

public:
    QString id,acc,user,pass,comment;
    int items;
    explicit Manager(QWidget *parent = nullptr);
    ~Manager();

private slots:
    void on_pushButton_save_clicked();

    void on_pushButton_update_clicked();

    void on_pushButton_delete_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_actionexit_triggered();

    void on_pushButton_load_clicked();

private:
    Ui::Manager *ui;

    Register *reg;      // registration dialog
    Login *log;         // login dialog
};

#endif // MANAGER_H
