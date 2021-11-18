#include "mainwindow.h"
#include <QApplication>
#include <loginsystem.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*mainWindow w;
    w.show();*/
    loginSystem *loginS = new loginSystem();
    loginS->show();
    return a.exec();
}
