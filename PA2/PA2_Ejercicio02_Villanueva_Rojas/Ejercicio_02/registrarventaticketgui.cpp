#include "registrarventaticketgui.h"
#include "ui_registrarventaticketgui.h"

registrarVentaTicketGui::registrarVentaTicketGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarVentaTicketGui)
{
    ui->setupUi(this);
}

registrarVentaTicketGui::~registrarVentaTicketGui()
{
    delete ui;
}

void registrarVentaTicketGui::on_btnCancel_clicked()
{
    this->close();
}

void registrarVentaTicketGui::on_btnRegis_clicked()
{
    //Registrar Venta Ticket
}

listaButacasClass *registrarVentaTicketGui::getLButacas() const
{
    return lButacas;
}

void registrarVentaTicketGui::setLButacas(listaButacasClass *value)
{
    lButacas = value;
}

listaZonasClass *registrarVentaTicketGui::getLZonas() const
{
    return lZonas;
}

void registrarVentaTicketGui::setLZonas(listaZonasClass *value)
{
    lZonas = value;
}

listaClienteClass *registrarVentaTicketGui::getLClientes() const
{
    return lClientes;
}

void registrarVentaTicketGui::setLClientes(listaClienteClass *value)
{
    lClientes = value;
}

listaTrabajadoresClass *registrarVentaTicketGui::getLTrabaj() const
{
    return lTrabaj;
}

void registrarVentaTicketGui::setLTrabaj(listaTrabajadoresClass *value)
{
    lTrabaj = value;
}

listaTicketsClass *registrarVentaTicketGui::getLTickets() const
{
    return lTickets;
}

void registrarVentaTicketGui::setLTickets(listaTicketsClass *value)
{
    lTickets = value;
}
