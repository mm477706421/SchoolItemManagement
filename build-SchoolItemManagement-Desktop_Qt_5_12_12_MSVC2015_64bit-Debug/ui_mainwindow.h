/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *getNoticeBtn_2;
    QLabel *loginStatus_2;
    QPushButton *submitBtn_2;
    QPushButton *loginBtn_2;
    QPushButton *registeBtn_2;
    QLineEdit *lineEdit_2;
    QPushButton *searchBtn_2;
    QTableView *tableView;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *page_2;
    QWidget *page_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(979, 560);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"\n"
"QButton{\n"
"color: white;\n"
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
"padding-bottom: 5px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_5->addWidget(listWidget);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        getNoticeBtn_2 = new QPushButton(tab);
        getNoticeBtn_2->setObjectName(QString::fromUtf8("getNoticeBtn_2"));
        getNoticeBtn_2->setMaximumSize(QSize(70, 16777215));
        getNoticeBtn_2->setStyleSheet(QString::fromUtf8("color: white;\n"
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

        horizontalLayout_2->addWidget(getNoticeBtn_2);

        loginStatus_2 = new QLabel(tab);
        loginStatus_2->setObjectName(QString::fromUtf8("loginStatus_2"));
        loginStatus_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(loginStatus_2);

        submitBtn_2 = new QPushButton(tab);
        submitBtn_2->setObjectName(QString::fromUtf8("submitBtn_2"));
        submitBtn_2->setMaximumSize(QSize(50, 50));
        submitBtn_2->setStyleSheet(QString::fromUtf8("color: white;\n"
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

        horizontalLayout_2->addWidget(submitBtn_2);

        loginBtn_2 = new QPushButton(tab);
        loginBtn_2->setObjectName(QString::fromUtf8("loginBtn_2"));
        loginBtn_2->setMaximumSize(QSize(50, 16777215));
        loginBtn_2->setStyleSheet(QString::fromUtf8("color: white;\n"
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
        loginBtn_2->setAutoDefault(false);

        horizontalLayout_2->addWidget(loginBtn_2);

        registeBtn_2 = new QPushButton(tab);
        registeBtn_2->setObjectName(QString::fromUtf8("registeBtn_2"));
        registeBtn_2->setMaximumSize(QSize(50, 16777215));
        registeBtn_2->setStyleSheet(QString::fromUtf8("color: white;\n"
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

        horizontalLayout_2->addWidget(registeBtn_2);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(300, 25));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 2px solid #bdc3c7;\n"
"color: #34495e;\n"
"font-family: \"Lato\", Helvetica, Arial, sans-serif;\n"
"font-size: 15px;\n"
"height: 100%;\n"
"border-radius: 6px;\n"
"box-shadow: none;\n"
"background-color: #fff;\n"
"background-clip: padding-box;\n"
"display: block;\n"
"width: 100%;\n"
"text-align: left;"));

        horizontalLayout_4->addWidget(lineEdit_2);

        searchBtn_2 = new QPushButton(tab);
        searchBtn_2->setObjectName(QString::fromUtf8("searchBtn_2"));
        searchBtn_2->setMaximumSize(QSize(50, 16777215));
        searchBtn_2->setStyleSheet(QString::fromUtf8("color: white;\n"
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

        horizontalLayout_4->addWidget(searchBtn_2);


        verticalLayout->addLayout(horizontalLayout_4);

        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("border: 2px solid #bdc3c7;\n"
"color: #34495e;\n"
"font-family: \"Lato\", Helvetica, Arial, sans-serif;\n"
"font-size: 15px;\n"
"height: 100%;\n"
"border-radius: 6px;\n"
"box-shadow: none;\n"
"background-color: #fff;\n"
"background-clip: padding-box;\n"
"display: block;\n"
"width: 100%;\n"
"text-align: left;"));

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_6->addWidget(comboBox);


        verticalLayout_3->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);

        horizontalLayout_5->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        getNoticeBtn_2->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        loginStatus_2->setText(QString());
        submitBtn_2->setText(QApplication::translate("MainWindow", "\345\217\221\345\270\203", nullptr));
        loginBtn_2->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        registeBtn_2->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        searchBtn_2->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
