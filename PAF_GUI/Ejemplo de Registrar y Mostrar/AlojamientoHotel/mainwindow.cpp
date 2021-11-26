#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registrarusuario.h"
#include "listausuarios.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->centralWidget()->setStyleSheet(
                "background-image:url(:/imagenes/fondo.jpg); background-position: center;");
    this->showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionRegistrar_Usuario_triggered()
{
    registrarUsuario *ru = new registrarUsuario();    
    ru->setLC( this->sP->getLC() );
    ru->show();
}

void MainWindow::on_actionLista_de_Usuarios_triggered()
{
    listaUsuarios *lu = new listaUsuarios();
    lu->setLC( this->sP->getLC());
    lu->show();
    lu->mostrarLista( lu->getLC() );
}

void MainWindow::on_actionSalir_triggered()
{
    this->close();
}
clsSupermercado *MainWindow::getSP() const
{
    return sP;
}

void MainWindow::setSP(clsSupermercado *value)
{
    sP = value;
}

