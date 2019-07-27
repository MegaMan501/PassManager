/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manager
{
public:
    QAction *actionexit;
    QWidget *centralWidget;
    QGroupBox *accounts_input;
    QWidget *layoutWidget;
    QHBoxLayout *all;
    QVBoxLayout *lines;
    QHBoxLayout *id;
    QLabel *label_id;
    QLineEdit *lineEdit_id;
    QHBoxLayout *acc;
    QLabel *label_acc;
    QLineEdit *lineEdit_acc;
    QHBoxLayout *user;
    QLabel *label_user;
    QLineEdit *lineEdit_user;
    QHBoxLayout *pass;
    QLabel *label_pas;
    QLineEdit *lineEdit_pass;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *texts;
    QLabel *label_comments;
    QTextEdit *textEdit_comments;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *buttons;
    QPushButton *pushButton_save;
    QPushButton *pushButton_update;
    QPushButton *pushButton_delete;
    QWidget *layoutWidget1;
    QVBoxLayout *accounts_table;
    QTableView *tableView;
    QPushButton *pushButton_load;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Manager)
    {
        if (Manager->objectName().isEmpty())
            Manager->setObjectName(QString::fromUtf8("Manager"));
        Manager->setEnabled(true);
        Manager->resize(750, 650);
        actionexit = new QAction(Manager);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        centralWidget = new QWidget(Manager);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        accounts_input = new QGroupBox(centralWidget);
        accounts_input->setObjectName(QString::fromUtf8("accounts_input"));
        accounts_input->setGeometry(QRect(20, 10, 701, 201));
        accounts_input->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 1ex; /* leave space at the top for the title */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left; /* position at the top center */\n"
"    padding: 0 3px;\n"
"}"));
        layoutWidget = new QWidget(accounts_input);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 631, 146));
        all = new QHBoxLayout(layoutWidget);
        all->setSpacing(6);
        all->setContentsMargins(11, 11, 11, 11);
        all->setObjectName(QString::fromUtf8("all"));
        all->setContentsMargins(0, 0, 0, 0);
        lines = new QVBoxLayout();
        lines->setSpacing(6);
        lines->setObjectName(QString::fromUtf8("lines"));
        id = new QHBoxLayout();
        id->setSpacing(6);
        id->setObjectName(QString::fromUtf8("id"));
        label_id = new QLabel(layoutWidget);
        label_id->setObjectName(QString::fromUtf8("label_id"));
        label_id->setEnabled(true);

        id->addWidget(label_id);

        lineEdit_id = new QLineEdit(layoutWidget);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setEnabled(true);
        lineEdit_id->setEchoMode(QLineEdit::Normal);
        lineEdit_id->setReadOnly(false);

        id->addWidget(lineEdit_id);


        lines->addLayout(id);

        acc = new QHBoxLayout();
        acc->setSpacing(6);
        acc->setObjectName(QString::fromUtf8("acc"));
        label_acc = new QLabel(layoutWidget);
        label_acc->setObjectName(QString::fromUtf8("label_acc"));

        acc->addWidget(label_acc);

        lineEdit_acc = new QLineEdit(layoutWidget);
        lineEdit_acc->setObjectName(QString::fromUtf8("lineEdit_acc"));

        acc->addWidget(lineEdit_acc);


        lines->addLayout(acc);

        user = new QHBoxLayout();
        user->setSpacing(6);
        user->setObjectName(QString::fromUtf8("user"));
        label_user = new QLabel(layoutWidget);
        label_user->setObjectName(QString::fromUtf8("label_user"));

        user->addWidget(label_user);

        lineEdit_user = new QLineEdit(layoutWidget);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));

        user->addWidget(lineEdit_user);


        lines->addLayout(user);

        pass = new QHBoxLayout();
        pass->setSpacing(6);
        pass->setObjectName(QString::fromUtf8("pass"));
        label_pas = new QLabel(layoutWidget);
        label_pas->setObjectName(QString::fromUtf8("label_pas"));

        pass->addWidget(label_pas);

        lineEdit_pass = new QLineEdit(layoutWidget);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        pass->addWidget(lineEdit_pass);


        lines->addLayout(pass);


        all->addLayout(lines);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        all->addItem(horizontalSpacer_2);

        texts = new QVBoxLayout();
        texts->setSpacing(6);
        texts->setObjectName(QString::fromUtf8("texts"));
        label_comments = new QLabel(layoutWidget);
        label_comments->setObjectName(QString::fromUtf8("label_comments"));

        texts->addWidget(label_comments);

        textEdit_comments = new QTextEdit(layoutWidget);
        textEdit_comments->setObjectName(QString::fromUtf8("textEdit_comments"));

        texts->addWidget(textEdit_comments);


        all->addLayout(texts);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        all->addItem(horizontalSpacer);

        buttons = new QVBoxLayout();
        buttons->setSpacing(6);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        pushButton_save = new QPushButton(layoutWidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(114, 159, 207);\n"
"    border-style: outset;\n"
"    border-radius: 10px;\n"
"    font: bold 16px;\n"
"    min-width: 5em;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(32, 74, 135);\n"
"}"));

        buttons->addWidget(pushButton_save);

        pushButton_update = new QPushButton(layoutWidget);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        pushButton_update->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(115, 210, 22);\n"
"    border-style: outset;\n"
"    border-radius: 10px;\n"
"    font: bold 16px;\n"
"    min-width: 5em;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(138, 226, 52);\n"
"}"));

        buttons->addWidget(pushButton_update);

        pushButton_delete = new QPushButton(layoutWidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(173, 127, 168);\n"
"    border-style: outset;\n"
"    border-radius: 10px;\n"
"    font: bold 16px;\n"
"    min-width: 5em;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(92, 53, 102);\n"
"}"));

        buttons->addWidget(pushButton_delete);


        all->addLayout(buttons);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 240, 701, 351));
        accounts_table = new QVBoxLayout(layoutWidget1);
        accounts_table->setSpacing(6);
        accounts_table->setContentsMargins(11, 11, 11, 11);
        accounts_table->setObjectName(QString::fromUtf8("accounts_table"));
        accounts_table->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget1);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8(" QTableView table {\n"
"  selection-background-color: rgb(52, 101, 164);\n"
"}"));

        accounts_table->addWidget(tableView);

        pushButton_load = new QPushButton(layoutWidget1);
        pushButton_load->setObjectName(QString::fromUtf8("pushButton_load"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_load->sizePolicy().hasHeightForWidth());
        pushButton_load->setSizePolicy(sizePolicy);
        pushButton_load->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(206, 92, 0);\n"
"    border-style: outset;\n"
"    border-radius: 10px;\n"
"    font: bold 16px;\n"
"    min-width: 5em;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(252, 175, 62);\n"
"}"));

        accounts_table->addWidget(pushButton_load);

        Manager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Manager);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Manager->setMenuBar(menuBar);
        statusBar = new QStatusBar(Manager);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Manager->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionexit);

        retranslateUi(Manager);

        QMetaObject::connectSlotsByName(Manager);
    } // setupUi

    void retranslateUi(QMainWindow *Manager)
    {
        Manager->setWindowTitle(QCoreApplication::translate("Manager", "PassManager", nullptr));
        actionexit->setText(QCoreApplication::translate("Manager", "exit", nullptr));
        accounts_input->setTitle(QCoreApplication::translate("Manager", "Add, Update, or Delete an Account: ", nullptr));
        label_id->setText(QCoreApplication::translate("Manager", "ID:              ", nullptr));
        label_acc->setText(QCoreApplication::translate("Manager", "Account:   ", nullptr));
        label_user->setText(QCoreApplication::translate("Manager", "Username:", nullptr));
        label_pas->setText(QCoreApplication::translate("Manager", "Password:", nullptr));
        label_comments->setText(QCoreApplication::translate("Manager", "Comments:", nullptr));
        pushButton_save->setText(QCoreApplication::translate("Manager", "Save", nullptr));
        pushButton_update->setText(QCoreApplication::translate("Manager", "Update", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Manager", "Delete", nullptr));
        pushButton_load->setText(QCoreApplication::translate("Manager", "Load Accounts", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Manager", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manager: public Ui_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
