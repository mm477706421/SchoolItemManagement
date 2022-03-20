/********************************************************************************
** Form generated from reading UI file 'registermain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERMAIN_H
#define UI_REGISTERMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterMain
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *titleLable;
    QFormLayout *formLayout;
    QLabel *passWordLable;
    QLabel *checkPassWordLable;
    QLabel *emailLable;
    QLineEdit *passWordLineEdit;
    QLineEdit *checkPassWordLineEdit;
    QLineEdit *emailLineEdit;
    QLabel *statusLable;
    QLineEdit *nickNameLineEdit;
    QLabel *nickNameLable;
    QLabel *userNameLable;
    QLineEdit *userNameLineEdit;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *maleRadio;
    QRadioButton *famaleRadio;
    QLabel *sexCheckBox;
    QPushButton *OkBtn;
    QPushButton *CancelBtn;

    void setupUi(QMainWindow *RegisterMain)
    {
        if (RegisterMain->objectName().isEmpty())
            RegisterMain->setObjectName(QString::fromUtf8("RegisterMain"));
        RegisterMain->resize(284, 368);
        centralwidget = new QWidget(RegisterMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        titleLable = new QLabel(centralwidget);
        titleLable->setObjectName(QString::fromUtf8("titleLable"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        titleLable->setFont(font);
        titleLable->setTextFormat(Qt::AutoText);
        titleLable->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLable);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        passWordLable = new QLabel(centralwidget);
        passWordLable->setObjectName(QString::fromUtf8("passWordLable"));

        formLayout->setWidget(4, QFormLayout::LabelRole, passWordLable);

        checkPassWordLable = new QLabel(centralwidget);
        checkPassWordLable->setObjectName(QString::fromUtf8("checkPassWordLable"));

        formLayout->setWidget(5, QFormLayout::LabelRole, checkPassWordLable);

        emailLable = new QLabel(centralwidget);
        emailLable->setObjectName(QString::fromUtf8("emailLable"));

        formLayout->setWidget(6, QFormLayout::LabelRole, emailLable);

        passWordLineEdit = new QLineEdit(centralwidget);
        passWordLineEdit->setObjectName(QString::fromUtf8("passWordLineEdit"));
        passWordLineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #bdc3c7;\n"
"color: #34495e;\n"
"font-family: \"Lato\", Helvetica, Arial, sans-serif;\n"
"font-size: 15px;\n"
"border-radius: 6px;\n"
"box-shadow: none;\n"
"background-color: #fff;\n"
"background-clip: padding-box;\n"
"display: block;\n"
"width: 100%;\n"
"text-align: left;\n"
"max-height: 50px"));

        formLayout->setWidget(4, QFormLayout::FieldRole, passWordLineEdit);

        checkPassWordLineEdit = new QLineEdit(centralwidget);
        checkPassWordLineEdit->setObjectName(QString::fromUtf8("checkPassWordLineEdit"));
        checkPassWordLineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #bdc3c7;\n"
"color: #34495e;\n"
"font-family: \"Lato\", Helvetica, Arial, sans-serif;\n"
"font-size: 15px;\n"
"border-radius: 6px;\n"
"box-shadow: none;\n"
"background-color: #fff;\n"
"background-clip: padding-box;\n"
"display: block;\n"
"width: 100%;\n"
"text-align: left;\n"
"max-height: 50px"));

        formLayout->setWidget(5, QFormLayout::FieldRole, checkPassWordLineEdit);

        emailLineEdit = new QLineEdit(centralwidget);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));
        emailLineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #bdc3c7;\n"
"color: #34495e;\n"
"font-family: \"Lato\", Helvetica, Arial, sans-serif;\n"
"font-size: 15px;\n"
"border-radius: 6px;\n"
"box-shadow: none;\n"
"background-color: #fff;\n"
"background-clip: padding-box;\n"
"display: block;\n"
"width: 100%;\n"
"text-align: left;\n"
"max-height: 50px"));

        formLayout->setWidget(6, QFormLayout::FieldRole, emailLineEdit);

        statusLable = new QLabel(centralwidget);
        statusLable->setObjectName(QString::fromUtf8("statusLable"));
        statusLable->setFrameShape(QFrame::NoFrame);

        formLayout->setWidget(7, QFormLayout::FieldRole, statusLable);

        nickNameLineEdit = new QLineEdit(centralwidget);
        nickNameLineEdit->setObjectName(QString::fromUtf8("nickNameLineEdit"));
        nickNameLineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #bdc3c7;\n"
"color: #34495e;\n"
"font-family: \"Lato\", Helvetica, Arial, sans-serif;\n"
"font-size: 15px;\n"
"border-radius: 6px;\n"
"box-shadow: none;\n"
"background-color: #fff;\n"
"background-clip: padding-box;\n"
"display: block;\n"
"width: 100%;\n"
"text-align: left;\n"
"max-height: 50px"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nickNameLineEdit);

        nickNameLable = new QLabel(centralwidget);
        nickNameLable->setObjectName(QString::fromUtf8("nickNameLable"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nickNameLable);

        userNameLable = new QLabel(centralwidget);
        userNameLable->setObjectName(QString::fromUtf8("userNameLable"));

        formLayout->setWidget(1, QFormLayout::LabelRole, userNameLable);

        userNameLineEdit = new QLineEdit(centralwidget);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));
        userNameLineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #bdc3c7;\n"
"color: #34495e;\n"
"font-family: \"Lato\", Helvetica, Arial, sans-serif;\n"
"font-size: 15px;\n"
"border-radius: 6px;\n"
"box-shadow: none;\n"
"background-color: #fff;\n"
"background-clip: padding-box;\n"
"display: block;\n"
"width: 100%;\n"
"text-align: left;\n"
"max-height: 50px"));

        formLayout->setWidget(1, QFormLayout::FieldRole, userNameLineEdit);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(50, 60));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        maleRadio = new QRadioButton(groupBox);
        maleRadio->setObjectName(QString::fromUtf8("maleRadio"));

        horizontalLayout->addWidget(maleRadio);

        famaleRadio = new QRadioButton(groupBox);
        famaleRadio->setObjectName(QString::fromUtf8("famaleRadio"));

        horizontalLayout->addWidget(famaleRadio);


        formLayout->setWidget(2, QFormLayout::FieldRole, groupBox);

        sexCheckBox = new QLabel(centralwidget);
        sexCheckBox->setObjectName(QString::fromUtf8("sexCheckBox"));
        sexCheckBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, sexCheckBox);


        verticalLayout->addLayout(formLayout);

        OkBtn = new QPushButton(centralwidget);
        OkBtn->setObjectName(QString::fromUtf8("OkBtn"));
        OkBtn->setStyleSheet(QString::fromUtf8("color: white;\n"
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

        verticalLayout->addWidget(OkBtn);

        CancelBtn = new QPushButton(centralwidget);
        CancelBtn->setObjectName(QString::fromUtf8("CancelBtn"));
        CancelBtn->setStyleSheet(QString::fromUtf8("color: white;\n"
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

        verticalLayout->addWidget(CancelBtn);


        verticalLayout_2->addLayout(verticalLayout);

        RegisterMain->setCentralWidget(centralwidget);

        retranslateUi(RegisterMain);

        QMetaObject::connectSlotsByName(RegisterMain);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterMain)
    {
        RegisterMain->setWindowTitle(QApplication::translate("RegisterMain", "MainWindow", nullptr));
        titleLable->setText(QApplication::translate("RegisterMain", "\350\264\246\346\210\267\346\263\250\345\206\214", nullptr));
        passWordLable->setText(QApplication::translate("RegisterMain", "\345\257\206\347\240\201", nullptr));
        checkPassWordLable->setText(QApplication::translate("RegisterMain", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        emailLable->setText(QApplication::translate("RegisterMain", "\351\202\256\347\256\261", nullptr));
        statusLable->setText(QString());
        nickNameLable->setText(QApplication::translate("RegisterMain", "\346\230\265\347\247\260", nullptr));
        userNameLable->setText(QApplication::translate("RegisterMain", "\347\224\250\346\210\267\345\220\215", nullptr));
        groupBox->setTitle(QString());
        maleRadio->setText(QApplication::translate("RegisterMain", "\347\224\267", nullptr));
        famaleRadio->setText(QApplication::translate("RegisterMain", "\345\245\263", nullptr));
        sexCheckBox->setText(QApplication::translate("RegisterMain", "\346\200\247\345\210\253", nullptr));
        OkBtn->setText(QApplication::translate("RegisterMain", "\347\241\256\350\256\244", nullptr));
        CancelBtn->setText(QApplication::translate("RegisterMain", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterMain: public Ui_RegisterMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERMAIN_H
