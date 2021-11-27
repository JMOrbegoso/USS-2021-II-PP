#include "gui/mainwindow.h"
#include <QApplication>
#include <localclass.h>
#include <datossemillaclass.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    vacunatonContraDengueClass *vacunaton = new vacunatonContraDengueClass();

    // Init datos
    datosSemillaClass::sembrar(vacunaton);

    MainWindow *w = new MainWindow();
    w->setVacunaDengue(vacunaton);
    w->showMaximized();

    return a.exec();
}
