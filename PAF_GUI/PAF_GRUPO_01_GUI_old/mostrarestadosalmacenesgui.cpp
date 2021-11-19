#include "mostrarestadosalmacenesgui.h"
#include "ui_mostrarestadosalmacenesgui.h"

mostrarEstadosAlmacenesGui::mostrarEstadosAlmacenesGui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mostrarEstadosAlmacenesGui)
{
    ui->setupUi(this);
}

mostrarEstadosAlmacenesGui::~mostrarEstadosAlmacenesGui()
{
    delete ui;
}
