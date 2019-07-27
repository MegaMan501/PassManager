/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *pushButton_login;
    QPushButton *pushButton_exit;
    QLabel *label_title;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_password;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        pushButton_login = new QPushButton(Login);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(50, 220, 112, 24));
        pushButton_login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_exit = new QPushButton(Login);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(210, 220, 112, 24));
        pushButton_exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_title = new QLabel(Login);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(30, 30, 205, 71));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        label_title->setFont(font);
        label_title->setFocusPolicy(Qt::StrongFocus);
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 331, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_password, 0, Qt::AlignVCenter);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "Log In", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Login", "Exit", nullptr));
        label_title->setText(QCoreApplication::translate("Login", "PassManager", nullptr));
        label->setText(QCoreApplication::translate("Login", "Password: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
