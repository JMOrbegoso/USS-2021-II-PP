#include "buscarpacientegui.h"
#include "ui_buscarpacientegui.h"

buscarPacienteGUI::buscarPacienteGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buscarPacienteGUI)
{
    ui->setupUi(this);
}

buscarPacienteGUI::~buscarPacienteGUI()
{
    delete ui;
}

void buscarPacienteGUI::on_pushButton_2_clicked()
{
    this->close();
}
