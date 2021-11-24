#include "atenderpaciente.h"
#include "ui_atenderpaciente.h"

atenderPaciente::atenderPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atenderPaciente)
{
    ui->setupUi(this);
}

atenderPaciente::~atenderPaciente()
{
    delete ui;
}

void atenderPaciente::on_regresarButton_clicked()
{
    this->close();
}


void atenderPaciente::on_atenderButton_clicked()
{
    this->close();
}

