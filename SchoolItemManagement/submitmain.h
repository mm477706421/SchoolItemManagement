#ifndef SUBMITMAIN_H
#define SUBMITMAIN_H

#include <QMainWindow>
#include "clientsocket.h"

namespace Ui {
class SubmitMain;
}

class SubmitMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit SubmitMain(QWidget *parent = nullptr);
    ~SubmitMain();

private slots:
    void on_acceptBtn_clicked();
    void recvData(std::string,std::string);
    void on_cancelBtn_clicked();

private:
    std::string loginUserName;
    std::string token;
    Ui::SubmitMain *ui;
    clientSocket server;
};

#endif // SUBMITMAIN_H
