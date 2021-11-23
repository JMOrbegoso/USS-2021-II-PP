#include "gestionarpaciente.h"
#include "ui_gestionarpaciente.h"
#include <registrarpaciente.h>

gestionarPaciente::gestionarPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarPaciente)
{
    ui->setupUi(this);
}

gestionarPaciente::~gestionarPaciente()
{
    delete ui;
}

void gestionarPaciente::on_regresarCmd_clicked()
{
    this->close();
}

void gestionarPaciente::on_registrarPacienteCmd_clicked()
{
    registrarPaciente *regiPaciente = new registrarPaciente();
    regiPaciente->show();
}
