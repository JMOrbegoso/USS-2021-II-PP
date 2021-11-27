#include "gui/mainwindow.h"
#include <QApplication>
#include <localclass.h>

int localClass::codigoLocal = 1;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    vacunatonContraDengueClass *vacunaton = new vacunatonContraDengueClass();

    MainWindow *w = new MainWindow();
    w->setVacunaDengue(vacunaton);
    w->showMaximized();

    return a.exec();
}
