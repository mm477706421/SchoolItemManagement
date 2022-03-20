#ifndef REGISTERMAIN_H
#define REGISTERMAIN_H

#include <QMainWindow>
#include <QMessageBox>
#include "clientsocket.h"
#include <string>
using namespace std;

namespace Ui {
class RegisterMain;
}

class RegisterMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegisterMain(QWidget *parent = nullptr);
    ~RegisterMain();

private slots:
    void on_OkBtn_clicked();

    void on_CancelBtn_clicked();

private:
    Ui::RegisterMain *ui;
    clientSocket socket;
};

#endif // REGISTERMAIN_H
