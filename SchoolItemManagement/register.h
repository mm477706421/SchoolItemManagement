#ifndef REGISTER_H
#define REGISTER_H

#include <QMainWindow>
#include "clientsocket.h"

namespace Ui {
class Register;
}

class Register : public QMainWindow
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::Register *ui;
    clientSocket socket;
};

#endif // REGISTER_H
