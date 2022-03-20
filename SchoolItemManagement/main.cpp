#include "mainwindow.h"

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
using namespace std;

#include <QApplication>

int main(int argc, char *argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("校园二手物品交易系统");
    w.show();
    return a.exec();
}
