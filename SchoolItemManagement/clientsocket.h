#ifndef CLIENTSOCKET_H
#define CLIENTSOCKET_H
#include <winsock2.h>
#include <cstring>
#include <cstdio>
#include <string>
#include <QMessageBox>
#include<iostream>
using namespace std;


#pragma comment(lib,"ws2_32.lib")


class clientSocket
{
public:
    clientSocket();
    bool sendMsg(std::string,std::string &);
private:
    WORD sockVersion = MAKEWORD(2,2);
    WSADATA wsaData;
    bool checkInitWSA();
};

#endif // CLIENTSOCKET_H
