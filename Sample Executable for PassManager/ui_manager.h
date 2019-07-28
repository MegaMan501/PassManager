/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            Manager->setObjectName(QStringLiteral("Manager"));
        Manager->setEnabled(true);
        Manager->resize(750, 650);
        actionexit = new QAction(Manager);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        centralWidget = new QWidget(Manager);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        accounts_input = new QGroupBox(centralWidget);
        accounts_input->setObjectName(QStringLiteral("accounts_input"));
        accounts_input->setGeometry(QRect(20, 10, 701, 201));
        accounts_input->setStyleSheet(QLatin1String("QGroupBox {\n"
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
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 631, 146));
        all = new QHBoxLayout(layoutWidget);
        all->setSpacing(6);
        all->setContentsMargins(11, 11, 11, 11);
        all->setObjectName(QStringLiteral("all"));
        all->setContentsMargins(0, 0, 0, 0);
        lines = new QVBoxLayout();
        lines->setSpacing(6);
        lines->setObjectName(QStringLiteral("lines"));
        id = new QHBoxLayout();
        id->setSpacing(6);
        id->setObjectName(QStringLiteral("id"));

        lines->addLayout(id);

        acc = new QHBoxLayout();
        acc->setSpacing(6);
        acc->setObjectName(QStringLiteral("acc"));
        label_acc = new QLabel(layoutWidget);
        label_acc->setObjectName(QStringLiteral("label_acc"));

        acc->addWidget(label_acc);

        lineEdit_acc = new QLineEdit(layoutWidget);
        lineEdit_acc->setObjectName(QStringLiteral("lineEdit_acc"));

        acc->addWidget(lineEdit_acc);


        lines->addLayout(acc);

        user = new QHBoxLayout();
        user->setSpacing(6);
        user->setObjectName(QStringLiteral("user"));
        label_user = new QLabel(layoutWidget);
        label_user->setObjectName(QStringLiteral("label_user"));

        user->addWidget(label_user);

        lineEdit_user = new QLineEdit(layoutWidget);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));

        user->addWidget(lineEdit_user);


        lines->addLayout(user);

        pass = new QHBoxLayout();
        pass->setSpacing(6);
        pass->setObjectName(QStringLiteral("pass"));
        label_pas = new QLabel(layoutWidget);
        label_pas->setObjectName(QStringLiteral("label_pas"));

        pass->addWidget(label_pas);

        lineEdit_pass = new QLineEdit(layoutWidget);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        pass->addWidget(lineEdit_pass);


        lines->addLayout(pass);


        all->addLayout(lines);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        all->addItem(horizontalSpacer_2);

        texts = new QVBoxLayout();
        texts->setSpacing(6);
        texts->setObjectName(QStringLiteral("texts"));
        label_comments = new QLabel(layoutWidget);
        label_comments->setObjectName(QStringLiteral("label_comments"));

        texts->addWidget(label_comments);

        textEdit_comments = new QTextEdit(layoutWidget);
        textEdit_comments->setObjectName(QStringLiteral("textEdit_comments"));

        texts->addWidget(textEdit_comments);


        all->addLayout(texts);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        all->addItem(horizontalSpacer);

        buttons = new QVBoxLayout();
        buttons->setSpacing(6);
        buttons->setObjectName(QStringLiteral("buttons"));
        pushButton_save = new QPushButton(layoutWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setStyleSheet(QLatin1String("QPushButton {\n"
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
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 240, 701, 351));
        accounts_table = new QVBoxLayout(layoutWidget1);
        accounts_table->setSpacing(6);
        accounts_table->setContentsMargins(11, 11, 11, 11);
        accounts_table->setObjectName(QStringLiteral("accounts_table"));
        accounts_table->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget1);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setAutoFillBackground(false);
        tableView->setStyleSheet(QLatin1String(" QTableView {\n"
"alternate-background-color: lightblue;\n"
"}\n"
"\n"
" QTableView::item:focus {\n"
" selection-background-color: blue; \n"
"}"));
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setFrameShadow(QFrame::Plain);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableView->setAlternatingRowColors(true);
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::SolidLine);
        tableView->horizontalHeader()->setVisible(true);

        accounts_table->addWidget(tableView);

        pushButton_load = new QPushButton(layoutWidget1);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_load->sizePolicy().hasHeightForWidth());
        pushButton_load->setSizePolicy(sizePolicy);
        pushButton_load->setStyleSheet(QLatin1String("QPushButton {\n"
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
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        Manager->setMenuBar(menuBar);
        statusBar = new QStatusBar(Manager);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Manager->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionexit);

        retranslateUi(Manager);

        QMetaObject::connectSlotsByName(Manager);
    } // setupUi

    void retranslateUi(QMainWindow *Manager)
    {
        Manager->setWindowTitle(QApplication::translate("Manager", "PassManager", Q_NULLPTR));
        actionexit->setText(QApplication::translate("Manager", "exit", Q_NULLPTR));
        accounts_input->setTitle(QApplication::translate("Manager", "Add, Update, or Delete an Account: ", Q_NULLPTR));
        label_acc->setText(QApplication::translate("Manager", "Account:   ", Q_NULLPTR));
        label_user->setText(QApplication::translate("Manager", "Username:", Q_NULLPTR));
        label_pas->setText(QApplication::translate("Manager", "Password:", Q_NULLPTR));
        label_comments->setText(QApplication::translate("Manager", "Comments:", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("Manager", "Add", Q_NULLPTR));
        pushButton_update->setText(QApplication::translate("Manager", "Update", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("Manager", "Delete", Q_NULLPTR));
        pushButton_load->setText(QApplication::translate("Manager", "Load Accounts", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("Manager", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Manager: public Ui_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
