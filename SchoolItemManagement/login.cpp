#include "login.h"
#include "ui_login.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif


Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->passWordLineEdit->setEchoMode(QLineEdit::Password);
    this->setWindowFlags(Qt::X11BypassWindowManagerHint | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);
}

Login::~Login()
{
    delete ui;
}



void Login::on_buttonBox_accepted()
{
    string passWord = ui->passWordLineEdit->text().toStdString();
    string userName = ui->userNameLineEdit->text().toStdString();
    string msg;
    string data = "{\"flag\":\"login\",\"username\":\""+userName+"\",\"password\":\""+passWord+"\"}";
    this->loginChecker.sendMsg(data,msg);
    regex r("[a-zA-Z0-9|=]{10,}");
    if(regex_match(msg,r)){
        //QMessageBox::information(NULL,"","valid token");
        QMessageBox::information(NULL,"",(userName +" 登陆成功").c_str());
        emit send_token(msg,userName);
    }
    else{
        QMessageBox::information(NULL,"",msg.c_str());
    }
}

