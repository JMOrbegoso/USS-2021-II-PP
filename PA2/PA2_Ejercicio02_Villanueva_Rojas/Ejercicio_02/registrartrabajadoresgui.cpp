#include "registrartrabajadoresgui.h"
#include "ui_registrartrabajadoresgui.h"

registrarTrabajadoresGui::registrarTrabajadoresGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarTrabajadoresGui)
{
    ui->setupUi(this);
}

registrarTrabajadoresGui::~registrarTrabajadoresGui()
{
    delete ui;
}

void registrarTrabajadoresGui::on_btnCancel_clicked()
{
    this->close();
}

void registrarTrabajadoresGui::on_btnRegis_clicked()
{
    //Registrar Trabajador
}
