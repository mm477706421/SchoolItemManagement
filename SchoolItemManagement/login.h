#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QAbstractButton>
#include <string>
#include "clientsocket.h"
#include<regex>
using namespace std;

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_buttonBox_accepted();

signals:
    void send_token(std::string,std::string);

private:
    Ui::Login *ui;
    clientSocket loginChecker;
};

#endif // LOGIN_H
