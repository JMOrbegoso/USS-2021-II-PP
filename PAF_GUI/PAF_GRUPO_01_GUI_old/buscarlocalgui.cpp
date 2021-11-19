#include "buscarlocalgui.h"
#include "ui_buscarlocalgui.h"

buscarLocalGUI::buscarLocalGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buscarLocalGUI)
{
    ui->setupUi(this);
}

buscarLocalGUI::~buscarLocalGUI()
{
    delete ui;
}

void buscarLocalGUI::on_cmdCancelarBusqueda_clicked()
{
    this->close();
}
