#include "registrarcolapacientesgui.h"
#include "ui_registrarcolapacientesgui.h"

registrarColaPacientesGUI::registrarColaPacientesGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarColaPacientesGUI)
{
    ui->setupUi(this);
}

registrarColaPacientesGUI::~registrarColaPacientesGUI()
{
    delete ui;
}

void registrarColaPacientesGUI::on_pushButton_2_clicked()
{
    this->close();
}
