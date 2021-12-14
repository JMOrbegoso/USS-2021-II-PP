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
    rC->setLClientes(this->circo->getLClientes());
    rC->show();
}

void MainWindow::on_actionRegistrar_Zona_y_Butacas_triggered()
{
    //Registrar Zona y sus Butacas
    registrarZonaGui *rZ = new registrarZonaGui();
    rZ->setLZonas(this->circo->getLZonas());
    //rZ->setLButacas(this->circo->getLZonas()->getCab()->getLButacas()); //la primera zona
    rZ->setLButacas(NULL);
    rZ->show();
}

void MainWindow::on_actionRegistrar_Trabajadores_triggered()
{
    //Registrar Trabajadores
    registrarTrabajadoresGui *rT = new registrarTrabajadoresGui();
    rT->setLTrabaj(this->circo->getLTrabajadores());
    rT->show();
}

void MainWindow::on_actionRealizar_Venta_Ticket_triggered()
{
    //Generar y Realizar Venta de Ticket
    registrarVentaTicketGui *rV = new registrarVentaTicketGui();
    string c, z, b, tr, mensaje;
    c = ""; z = ""; b = ""; tr = ""; mensaje = "";
    if(circo->getLClientes()->getCab() == NULL)
        c = "Cliente ";
    if(circo->getLZonas()->getCab() == NULL)
        z = "Zona ";
    else if(circo->getLZonas()->getCab()->getLButacas()->getCab() == NULL)
        b = "Butaca ";
    if(circo->getLTrabajadores()->getCab() == NULL)
        tr = "Trabajador";
    mensaje = "Registre primero: " + c + z + b + tr;
    if(mensaje != "Registre primero: "){
        QMessageBox msje;
        msje.setText(QString::fromStdString(mensaje));
        msje.exec();
        return;
    }
    rV->setLClientes(this->circo->getLClientes());
    rV->setLZonas(this->circo->getLZonas());
    rV->setLButacas(this->circo->getLZonas()->getCab()->getLButacas());
    rV->setLTrabaj(this->circo->getLTrabajadores());
    rV->setLTickets(this->circo->getLTickets());
    rV->llenarComBoxZona();
    rV->llenarComBoxClie();
    rV->llenarComBoxTrab();
    rV->show();
}

void MainWindow::on_actionListar_Butacas_de_una_Zona_triggered()
{
    //Listar Butacas de una zona y quien lo ocupa
    listarButacasZonaGui *lB = new listarButacasZonaGui();
    if(this->circo->getLZonas()->getCab() == NULL){
        QMessageBox msje;
        msje.setText("Primero registre una zona");
        msje.exec();
        return;
    }else if(this->circo->getLZonas()->getCab() == NULL)
        lB->setLButacas(NULL);
    else
        lB->setLButacas(this->circo->getLZonas()->getCab()->getLButacas());
    lB->setLZonas(this->circo->getLZonas());
    lB->llenarComBox();
    lB->show();
}
