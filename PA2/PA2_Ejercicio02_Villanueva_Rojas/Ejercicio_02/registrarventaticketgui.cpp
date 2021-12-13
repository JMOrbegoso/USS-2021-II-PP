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
