#include "clientsocket.h"


clientSocket::clientSocket()
{
;
}

bool clientSocket::checkInitWSA(){
    return WSAStartup(this->sockVersion,&wsaData);
}

bool clientSocket::sendMsg(std::string msg,std::string &msgrt){
    string retDataStr;
    if(checkInitWSA() != 0){
        return false;
    }
    while(true){
        SOCKET sclient = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
        if(sclient == INVALID_SOCKET){
            return false;
        }
        sockaddr_in serAddr;
        serAddr.sin_family = AF_INET;
        serAddr.sin_port = htons(12005);
        serAddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
        if(connect(sclient,(sockaddr *) &serAddr,sizeof(serAddr)) == SOCKET_ERROR){
            closesocket(sclient);
            return false;
        }
        const char * sendData;
        sendData = msg.c_str();
        send(sclient,sendData,strlen(sendData),0);
        char recData[2048];
        int ret = recv(sclient,recData,2048,0);
        if(ret >0){
            recData[ret] = 0x00;
            msgrt = recData;
            return true;
        }
        closesocket(sclient);
    }
    WSACleanup();
    return true;
}
