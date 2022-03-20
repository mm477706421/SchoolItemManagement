#include "submitmain.h"
#include "ui_submitmain.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
SubmitMain::SubmitMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SubmitMain)
{
    ui->setupUi(this);
}

SubmitMain::~SubmitMain()
{
    delete ui;
}

void SubmitMain::on_acceptBtn_clicked()
{
    QString title = ui->titleLineEdit->text();
    QString detail = ui->detailTextEdit->toPlainText();
    QString man = ui->ManLineEdit->text();
    QString contact = ui->contactLineEdit->text();
    if(title == ""){
        ui->titleLabel->setText("<font color=red><b>商品标题</b></font>");
        return;
    }
    else{
        ui->titleLabel->setText("<font color=black><b>商品标题</b></font>");
    }
    if(detail == ""){
        ui->detailLabel->setText("<font color=red><b>商品详情</b></font>");
        return;
    }
    else{
        ui->detailLabel->setText("<font color=black><b>商品详情</b></font>");
    }
    if(man == ""){
        ui->manLabel->setText("<font color=red><b>联系人</b></font>");
        return;
    }
    else{
        ui->manLabel->setText("<font color=black><b>联系人</b></font>");
    }
    if(contact == ""){
        ui->contactLabel->setText("<font color=red><b>联系方式</b></font>");
        return;
    }
    else{
        ui->contactLabel->setText("<font color=black><b>联系方式</b></font>");
    }

    std::string data = "{\"flag\":\"submit\",\"username\":\""+this->loginUserName +"\",\"token\":\""+this->token+"\",\"title\":\""+title.toStdString()+"\",\"detail\":\""+detail.toStdString()+"\",\"man\":\""+man.toStdString()+"\",\"contact\":\""+contact.toStdString()+"\"}";
    std::string msg;
    this->server.sendMsg(data,msg);
    if(msg == "0x000"){
        QMessageBox::information(NULL,"操作成功","提交成功");
    }
    else{
        QMessageBox::information(NULL,"操作失败","提交失败");
    }


}


void SubmitMain::on_cancelBtn_clicked()
{
    this->destroy();
}

void SubmitMain::recvData(std::string username,std::string token){
    this->loginUserName = username;
    this->token = token;
}


