#include "mainwindow.h"
#include <QApplication>
#include <localclass.h>

int localClass::codigoLocal = 0;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow();
    w->showMaximized();

    return a.exec();
}
