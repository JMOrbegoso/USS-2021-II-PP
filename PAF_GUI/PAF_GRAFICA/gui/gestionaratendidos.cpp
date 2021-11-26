#include "gestionaratendidos.h"
#include "ui_gestionaratendidos.h"
#include <gui/registrarpaciente.h>

gestionarAtendidos::gestionarAtendidos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarAtendidos)
{
    ui->setupUi(this);
}

gestionarAtendidos::~gestionarAtendidos()
{
    delete ui;
}

void gestionarAtendidos::on_regresarCmd_clicked()
{
    this->close();
}

void gestionarAtendidos::on_registrarOtroPacienteCmd_clicked()
{
    registrarPaciente *regiPaciente = new registrarPaciente();
    regiPaciente->showNormal();
    this->close();
}
