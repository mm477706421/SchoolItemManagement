/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *userNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *passWordLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(242, 188);
        Login->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 9px;"));
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setStyleSheet(QString::fromUtf8("margin: 2px 0 0;\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: #343a40;"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("float: left;\n"
"margin: 2px 0 0;\n"
"font: 9pt \"\351\273\221\344\275\223\";\n"
"font-size: 11px;\n"
"line-height: 1.4;\n"
"padding-top: 5px;\n"
"width: 50%;\n"
"color: #34495e;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        userNameLineEdit = new QLineEdit(Login);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));
        userNameLineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #bdc3c7;\n"
"color: #34495e;\n"
"font-family: \"Lato\", Helvetica, Arial, sans-serif;\n"
"font-size: 15px;\n"
"height: 30px;\n"
"border-radius: 6px;\n"
"box-shadow: none;\n"
"background-color: #fff;\n"
"background-clip: padding-box;\n"
"display: block;\n"
"width: 100%;\n"
"text-align: left;"));

        horizontalLayout->addWidget(userNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setStyleSheet(QString::fromUtf8("float: left;\n"
"margin: 2px 0 0;\n"
"font: 9pt \"\351\273\221\344\275\223\";\n"
"font-size: 11px;\n"
"line-height: 1.4;\n"
"padding-top: 5px;\n"
"width: 50%;\n"
"color: #34495e;"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        passWordLineEdit = new QLineEdit(Login);
        passWordLineEdit->setObjectName(QString::fromUtf8("passWordLineEdit"));
        passWordLineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #bdc3c7;\n"
"color: #34495e;\n"
"font-family: \"Lato\", Helvetica, Arial, sans-serif;\n"
"font-size: 15px;\n"
"height: 30px;\n"
"border-radius: 6px;\n"
"box-shadow: none;\n"
"background-color: #fff;\n"
"background-clip: padding-box;\n"
"display: block;\n"
"width: 100%;\n"
"text-align: left;"));

        horizontalLayout_2->addWidget(passWordLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(Login);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #48c9b0;\n"
"border-color: #48c9b0;\n"
"font-size: 17px;\n"
"border-radius: 6px;\n"
"font-weight: normal;\n"
"border: none;\n"
"border: 2px solid #bdc3c7;\n"
"display: block;\n"
"width: 100%;\n"
"float: left;\n"
"margin: 2px 0 2px;\n"
"font: 9pt \"\351\273\221\344\275\223\";\n"
"font-size: 11px;\n"
"padding-top: 5px;\n"
"padding-bottom: 5px;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Login);
        QObject::connect(buttonBox, SIGNAL(accepted()), Login, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Login, SLOT(reject()));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
        label_3->setText(QApplication::translate("Login", "\350\264\246\345\217\267\347\231\273\351\231\206", nullptr));
        label->setText(QApplication::translate("Login", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
