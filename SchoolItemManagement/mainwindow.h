#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "registermain.h"
#include<QListWidgetItem>
#include "submitmain.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_registeBtn_2_clicked();

    void on_loginBtn_2_clicked();
    void recv_token(std::string,std::string);
    void on_getNoticeBtn_2_clicked();

    void on_searchBtn_2_clicked();

    void on_submitBtn_2_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

signals:
    void sendData(std::string,std::string);

private:
    void initTabWidget();
    void initTable();
    void initListWidget();
    bool checkLogin();
    bool logined;
    Ui::MainWindow *ui;
    Login loginw;
    RegisterMain registerw;
    string token;
    clientSocket server;
    string loginUserName;
    void listUpdate(std::string);
    SubmitMain submitw;
};
#endif // MAINWINDOW_H
