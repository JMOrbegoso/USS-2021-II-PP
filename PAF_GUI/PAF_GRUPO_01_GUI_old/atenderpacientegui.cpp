#include "atenderpacientegui.h"
#include "ui_atenderpacientegui.h"

atenderPacienteGUI::atenderPacienteGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atenderPacienteGUI)
{
    ui->setupUi(this);
}

atenderPacienteGUI::~atenderPacienteGUI()
{
    delete ui;
}

void atenderPacienteGUI::on_pushButton_2_clicked()
{
    this->close();
}
