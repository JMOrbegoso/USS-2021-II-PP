#include "gui/mainwindow.h"
#include "dataSeederClass.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // Class instance
    academyClass *academy = new academyClass();

    // Load data
    dataSeederClass::seed(academy);

    // Show UI
    QApplication a(argc, argv);

    MainWindow *w = new MainWindow(academy->getStudents());
    w->show();
    return a.exec();
}
