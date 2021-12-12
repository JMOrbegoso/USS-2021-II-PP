#include "gui/mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // Show UI
    QApplication a(argc, argv);

    MainWindow *w = new MainWindow(academy->getStudents());
    w->show();
    return a.exec();
}
