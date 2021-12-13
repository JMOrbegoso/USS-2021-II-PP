#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->centralWidget()->setStyleSheet("background-image:url(:/img/bg.jpg); background-position: center;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

circoClass *MainWindow::getCirco() const
{
    return circo;
}

void MainWindow::setCirco(circoClass *value)
{
    circo = value;
}


void MainWindow::on_actionRegistrar_Cliente_triggered()
{
    //Registrar Cliente
    registrarClienteGui *rC = new registrarClienteGui();


}

void MainWindow::on_actionRegistrar_Zona_y_Butacas_triggered()
{
    //Registrar Zona y sus Butacas
}

void MainWindow::on_actionRegistrar_Trabajadores_triggered()
{
    //Registrar Trabajadores
}

void MainWindow::on_actionRealizar_Venta_Ticket_triggered()
{
    //Generar y Realizar Venta de Ticket
}

void MainWindow::on_actionListar_Butacas_de_una_Zona_triggered()
{
    //Listar Butacas de una zona y quien lo ocupa
}
