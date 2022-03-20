#include "registermain.h"
#include "ui_registermain.h"
#include <QString>
#include <QRegExp>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

RegisterMain::RegisterMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterMain)
{
    ui->setupUi(this);
    ui->passWordLineEdit->setEchoMode(QLineEdit::Password);
    ui->checkPassWordLineEdit->setEchoMode(QLineEdit::Password);
}

RegisterMain::~RegisterMain()
{
    delete ui;
}

void RegisterMain::on_OkBtn_clicked()
{
    QString nickname = ui->userNameLineEdit->text();
    QString password = ui->passWordLineEdit->text();
    QString checkPassWd = ui->checkPassWordLineEdit->text();
    bool sex = ui->maleRadio->isChecked();
    QString email = ui->emailLineEdit->text();
    QString username = ui->userNameLineEdit->text();
    if(0 == nickname.size()){
        ui->statusLable->setText("昵称不能为空");
        ui->statusLable->setStyleSheet("color:rgb(255,78,25);");
        return;
    }
    if(nickname.size() > 21){
        ui->statusLable->setText("昵称长度超过21位");
        ui->statusLable->setStyleSheet("color:rgb(255,78,25);");
        return;
    }
    QString pattern = "^[a-zA-Z0-9]{8,}$";
    QRegExp rx;
    rx.setPatternSyntax(QRegExp::RegExp);
    rx.setCaseSensitivity(Qt::CaseSensitive);
    rx.setPattern(pattern);
    if(password.isEmpty()){
        ui->statusLable->setText("密码不能为空！");
        ui->statusLable->setStyleSheet("color:rgb(255,78,25);");
        return;
    }
    else if(!rx.exactMatch(password)){
        ui->statusLable->setText("密码只能是8位数以上数字字母");
        ui->statusLable->setStyleSheet("color:rgb(255,78,25);");
        return;
    }
    else if(password.size() < 6 || password.size() > 18){
        ui->statusLable->setText("密码长度范围是[6,18]!");
        ui->statusLable->setStyleSheet("color:rgb(255,78,25);");
        return;
    }
    else if(checkPassWd.isEmpty()){
        ui->statusLable->setText("验证密码不能为空!");
        ui->statusLable->setStyleSheet("color:rgb(255,78,25);");
        return;
    }
    else if(0 != password.compare(checkPassWd)){
        ui->statusLable->setText("两次密码输入不一致！");
        ui->statusLable->setStyleSheet("color:rgb(255,78,25);");
        return;
    }
    string retdt = "";
    QString data = "{\"flag\":\"reg\",\"nickname\":\"" + nickname + "\",\"password\":\"" + password + "\",\"email\":\"" + email + "\",\"sex\":" + (sex?"1":"0") + ",\"username\":\"" + username+"\"}";
    if(this->socket.sendMsg(data.toStdString(),retdt)){
        if(retdt != ""){
            QMessageBox::information(NULL,"注册成功",retdt.c_str());
        }
        else{
            QMessageBox::warning(NULL,"注册失败","注册失败，请重试");
        }
    }
    else{
        QMessageBox::warning(NULL,"注册失败","注册失败，请重试");
    }

}


void RegisterMain::on_CancelBtn_clicked()
{
    this->destroy();
}



