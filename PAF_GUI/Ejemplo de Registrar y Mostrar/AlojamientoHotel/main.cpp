#include "mainwindow.h"
#include <QApplication>
#include "loginsystem.h"
#include "clssupermercado.h"


int clsCliente::codigo = 0;

int main(int argc, char *argv[])
{
    clsSupermercado *super = new clsSupermercado();
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow();
    w->setSP( super );
    w->show();
    /*loginSystem *lg = new loginSystem();
    lg->show();      // show metodo para mostrar un formulario*/
    return a.exec();
}
