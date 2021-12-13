#include "registrarclientegui.h"
#include "ui_registrarclientegui.h"

registrarClienteGui::registrarClienteGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarClienteGui)
{
    ui->setupUi(this);
}

registrarClienteGui::~registrarClienteGui()
{
    delete ui;
}

void registrarClienteGui::on_btnCancel_clicked()
{
    this->close();
}

void registrarClienteGui::on_btnRegis_clicked()
{
    //Registrar cliente
}
