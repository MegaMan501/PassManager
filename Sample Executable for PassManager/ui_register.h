/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label_title;
    QGroupBox *groupBox;
    QPushButton *pushButton_register;
    QPushButton *pushButton_exit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_passord;
    QLineEdit *lineEdit_password;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_confirm;
    QLineEdit *lineEdit_confirm;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(480, 320);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Register->sizePolicy().hasHeightForWidth());
        Register->setSizePolicy(sizePolicy);
        Register->setStyleSheet(QStringLiteral(""));
        label_title = new QLabel(Register);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(230, 20, 241, 41));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        label_title->setFont(font);
        label_title->setFocusPolicy(Qt::StrongFocus);
        groupBox = new QGroupBox(Register);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 80, 441, 201));
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"    border: 2px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 1ex; /* leave space at the top for the title */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left; /* position at the top center */\n"
"    padding: 0 3px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
"}"));
        pushButton_register = new QPushButton(groupBox);
        pushButton_register->setObjectName(QStringLiteral("pushButton_register"));
        pushButton_register->setGeometry(QRect(80, 150, 112, 30));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_register->sizePolicy().hasHeightForWidth());
        pushButton_register->setSizePolicy(sizePolicy1);
        pushButton_register->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_exit = new QPushButton(groupBox);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(210, 150, 112, 30));
        sizePolicy1.setHeightForWidth(pushButton_exit->sizePolicy().hasHeightForWidth());
        pushButton_exit->setSizePolicy(sizePolicy1);
        pushButton_exit->setStyleSheet(QLatin1String("QPushButton {\n"
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
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 371, 70));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_passord = new QLabel(layoutWidget);
        label_passord->setObjectName(QStringLiteral("label_passord"));

        horizontalLayout->addWidget(label_passord);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_confirm = new QLabel(layoutWidget);
        label_confirm->setObjectName(QStringLiteral("label_confirm"));

        horizontalLayout_2->addWidget(label_confirm);

        lineEdit_confirm = new QLineEdit(layoutWidget);
        lineEdit_confirm->setObjectName(QStringLiteral("lineEdit_confirm"));
        lineEdit_confirm->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_confirm);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(lineEdit_password, lineEdit_confirm);
        QWidget::setTabOrder(lineEdit_confirm, pushButton_register);
        QWidget::setTabOrder(pushButton_register, pushButton_exit);
        QWidget::setTabOrder(pushButton_exit, label_title);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", Q_NULLPTR));
        label_title->setText(QApplication::translate("Register", "PassManager", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Register", "Set Master Password: ", Q_NULLPTR));
        pushButton_register->setText(QApplication::translate("Register", "Register", Q_NULLPTR));
        pushButton_exit->setText(QApplication::translate("Register", "Exit", Q_NULLPTR));
        label_passord->setText(QApplication::translate("Register", "Password:                ", Q_NULLPTR));
        label_confirm->setText(QApplication::translate("Register", "Confirm Password: ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
