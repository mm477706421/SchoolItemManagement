QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#INCLUDEPATH += C:\Users\Fan\AppData\Local\Programs\Python\Python39\include
#LIBS += C:\Users\Fan\AppData\Local\Programs\Python\Python39\libs\python3.lib \
#        C:\Users\Fan\AppData\Local\Programs\Python\Python39\libs\python39.lib \
#        C:\Users\Fan\AppData\Local\Programs\Python\Python39\libs\_tkinter.lib \
#        C:\Users\Fan\AppData\Local\Programs\Python\Python39\libs\python39_d.lib \

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clientsocket.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    registermain.cpp \
    submitmain.cpp

HEADERS += \
    clientsocket.h \
    login.h \
    mainwindow.h \
    registermain.h \
    submitmain.h

FORMS += \
    login.ui \
    mainwindow.ui \
    registermain.ui \
    submitmain.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
