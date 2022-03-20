#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include <QMessageBox>
#include <fstream>
#include <vector>
#include <sstream>
#include <QStandardItemModel>
using namespace std;

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->logined = false;
    ifstream file("LOG.dat");
    if(!file.is_open()){
        this->logined = false;
        ofstream logfile("LOG.dat");
        logfile << "";
        logfile.close();
    }
    if(this->logined){
        ui->loginStatus_2->setText("欢迎你:");
    }
    ui->setupUi(this);
    this->checkLogin();
    this->loginw.setWindowTitle("登录");
    this->loginw.setFixedSize(242,188);
    this->registerw.setWindowTitle("注册");
    this->registerw.setFixedSize(284,368);
    this->connect(&loginw,SIGNAL(send_token(std::string,std::string)),this,SLOT(recv_token(std::string,std::string)));
    ui->tableView->selectionMode();
    this->connect(this,SIGNAL(sendData(std::string,std::string)),&submitw,SLOT(recvData(std::string,std::string)));
    this->submitw.setFixedHeight(350);
    ui->tableView->setSortingEnabled(true);
    initTable();
    initTabWidget();
    initListWidget();
}

void MainWindow::initListWidget(){
    ui->listWidget->addItem("首页");
    ui->listWidget->addItem("购物车");
    ui->listWidget->addItem("个人中心");
}

void MainWindow::initTabWidget(){
    ui->tabWidget->setTabText(0,"商品查询");
    ui->tabWidget->setTabText(1,"发布商品详情");
    ui->tabWidget->setTabEnabled(1,this->logined);
    if(this->logined){
        ui->comboBox->insertItem(0,"Hello");
        ui->comboBox->insertItem(1,"Hello2");
        ui->comboBox->insertItem(2,"Hello3");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initTable()
{
    ui->tableView->setFrameShape(QFrame::NoFrame); //设置边框
    ui->tableView->verticalHeader()->setVisible(false); //设置垂直头不可见
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection); //可多选（Ctrl、Shift、 Ctrl+A都可以）
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择行为时每次选择一行
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//去掉水平滚动条
    ui->tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);  //去掉垂直滚动条
    ui->tableView->setFont(QFont("Helvetica"));
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->setFrameShape(QFrame::NoFrame); //设置边框
    ui->tableView->setFocusPolicy(Qt::NoFocus); //去除选中虚线框

    QPalette palette;    //调色板
    palette.setColor(QPalette::Base, QColor(255,255,255));   //基底
    palette.setColor(QPalette::AlternateBase, QColor(233,245,252));  //交替基底
    ui->tableView->setPalette(palette);
}


bool MainWindow::checkLogin(){
    if(this->token == ""){
        ui->loginStatus_2->setText("请先登录");
        ui->submitBtn_2->setVisible(false);
        return false;
    }
    std::string data = "{\"flag\":\"check_token\",\"username\":\""+this->loginUserName +"\",\"token\":\""+ this->token+ "\"}";
    std::string msg;
    this->server.sendMsg(data,msg);
    if(msg == this->token){
        ui->loginStatus_2->setText((this->loginUserName+" 欢迎您").c_str());
        ui->submitBtn_2->setVisible(true);
        return true;
    }
    else{
        ui->loginStatus_2->setText("请先登录");
        ui->submitBtn_2->setVisible(false);
        return false;
    }
}

void MainWindow::on_registeBtn_2_clicked()
{
    this->registerw.show();
}


void MainWindow::on_loginBtn_2_clicked()
{
    this->loginw.exec();
}

void MainWindow::recv_token(std::string token,std::string userName){
    this->token = token;
    this->loginUserName = userName;
    if(this->checkLogin()){
        this->logined = true;
        initTabWidget();
    }
}

void MainWindow::on_getNoticeBtn_2_clicked()
{
    std::string content = ui->lineEdit_2->text().toStdString();
    if(content == ""){
        this->listUpdate("NULL");
    }
    else{
        this->listUpdate(content);
    }

}

void MainWindow::listUpdate(std::string content){
    int cnt = 0;
    vector<int> noticeNo;
    std::string msg;
    std::string flag2 = content;
    if(content == "NULL"){
        flag2 = "get_all";
    }
    std::string data = "{\"flag\":\"get_notice\",\"flag2\":\"" +flag2+"\",\"username\":\""+this->loginUserName+"\",\"token\":\""+this->token+"\"}";
    //QMessageBox::information(NULL,"",data.c_str());
    this->server.sendMsg(data,msg);
    std::stringstream sstream;
    sstream << msg;
    sstream >> cnt;
    int temp;
    QStandardItemModel *model = new QStandardItemModel();
    model->setColumnCount(6);
    model->setHeaderData(0,Qt::Horizontal,"商品编号");
    model->setHeaderData(1,Qt::Horizontal,"发布日期");
    model->setHeaderData(2,Qt::Horizontal,"商品标题");
    model->setHeaderData(3,Qt::Horizontal,"商品详情");
    model->setHeaderData(4,Qt::Horizontal,"发布人");
    model->setHeaderData(5,Qt::Horizontal,"联系方式");
    int No = 0;
    while(sstream >> temp){
        noticeNo.push_back(temp);
        std::string data = "{\"flag\":\"get_one_notice\",\"flag2\":\"" +to_string(temp)+"\",\"username\":\""+this->loginUserName+"\",\"token\":\""+this->token+"\"}";
        this->server.sendMsg(data,msg);
        std::stringstream noticess;
        noticess << msg;
        string no,datetime,title,detail,man,contact;
        noticess >> no >> datetime >> title >> detail >> man >> contact;
        model->setItem(No,0,new QStandardItem(no.c_str()));
        model->setItem(No,1,new QStandardItem(datetime.c_str()));
        model->setItem(No,2,new QStandardItem(title.c_str()));
        model->setItem(No,3,new QStandardItem(detail.c_str()));
        model->setItem(No,4,new QStandardItem(man.c_str()));
        model->setItem(No,5,new QStandardItem(contact.c_str()));
        No++;
    }
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::on_searchBtn_2_clicked()
{
    std::string content = ui->lineEdit_2->text().toStdString();
    if(content == ""){
        this->listUpdate("NULL");
    }
    else{
        this->listUpdate(content);
    }
}


void MainWindow::on_submitBtn_2_clicked()
{
    this->submitw.show();
    emit sendData(this->loginUserName,this->token);
}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    if(item->text() == "首页"){
        ui->stackedWidget->setCurrentIndex(0);
    }
    if(item->text() == "购物车"){
        ui->stackedWidget->setCurrentIndex(1);
    }
    if(item->text() == "个人中心"){
        ui->stackedWidget->setCurrentIndex(2);
    }
}

