/********************************************************************************
** Form generated from reading UI file 'submitmain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMITMAIN_H
#define UI_SUBMITMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubmitMain
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *titleLabel;
    QLabel *detailLabel;
    QLabel *manLabel;
    QLabel *contactLabel;
    QLineEdit *titleLineEdit;
    QLineEdit *ManLineEdit;
    QLineEdit *contactLineEdit;
    QPlainTextEdit *detailTextEdit;
    QPushButton *acceptBtn;
    QPushButton *cancelBtn;

    void setupUi(QMainWindow *SubmitMain)
    {
        if (SubmitMain->objectName().isEmpty())
            SubmitMain->setObjectName(QString::fromUtf8("SubmitMain"));
        SubmitMain->resize(290, 334);
        centralwidget = new QWidget(SubmitMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);

        detailLabel = new QLabel(centralwidget);
        detailLabel->setObjectName(QString::fromUtf8("detailLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, detailLabel);

        manLabel = new QLabel(centralwidget);
        manLabel->setObjectName(QString::fromUtf8("manLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, manLabel);

        contactLabel = new QLabel(centralwidget);
        contactLabel->setObjectName(QString::fromUtf8("contactLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, contactLabel);

        titleLineEdit = new QLineEdit(centralwidget);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, titleLineEdit);

        ManLineEdit = new QLineEdit(centralwidget);
        ManLineEdit->setObjectName(QString::fromUtf8("ManLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ManLineEdit);

        contactLineEdit = new QLineEdit(centralwidget);
        contactLineEdit->setObjectName(QString::fromUtf8("contactLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, contactLineEdit);

        detailTextEdit = new QPlainTextEdit(centralwidget);
        detailTextEdit->setObjectName(QString::fromUtf8("detailTextEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, detailTextEdit);


        verticalLayout->addLayout(formLayout);

        acceptBtn = new QPushButton(centralwidget);
        acceptBtn->setObjectName(QString::fromUtf8("acceptBtn"));
        acceptBtn->setStyleSheet(QString::fromUtf8("color: white;\n"
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

        verticalLayout->addWidget(acceptBtn);

        cancelBtn = new QPushButton(centralwidget);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setStyleSheet(QString::fromUtf8("color: white;\n"
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

        verticalLayout->addWidget(cancelBtn);


        verticalLayout_2->addLayout(verticalLayout);

        SubmitMain->setCentralWidget(centralwidget);

        retranslateUi(SubmitMain);

        QMetaObject::connectSlotsByName(SubmitMain);
    } // setupUi

    void retranslateUi(QMainWindow *SubmitMain)
    {
        SubmitMain->setWindowTitle(QApplication::translate("SubmitMain", "MainWindow", nullptr));
        label->setText(QApplication::translate("SubmitMain", "\345\225\206\345\223\201\345\217\221\345\270\203", nullptr));
        titleLabel->setText(QApplication::translate("SubmitMain", "\345\225\206\345\223\201\346\240\207\351\242\230", nullptr));
        detailLabel->setText(QApplication::translate("SubmitMain", "\345\225\206\345\223\201\350\257\246\346\203\205", nullptr));
        manLabel->setText(QApplication::translate("SubmitMain", "\350\201\224\347\263\273\344\272\272", nullptr));
        contactLabel->setText(QApplication::translate("SubmitMain", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        acceptBtn->setText(QApplication::translate("SubmitMain", "\347\241\256\350\256\244", nullptr));
        cancelBtn->setText(QApplication::translate("SubmitMain", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubmitMain: public Ui_SubmitMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMITMAIN_H
