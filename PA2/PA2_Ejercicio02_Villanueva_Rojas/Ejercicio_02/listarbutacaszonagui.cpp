#include "listarbutacaszonagui.h"
#include "ui_listarbutacaszonagui.h"

listarButacasZonaGui::listarButacasZonaGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listarButacasZonaGui)
{
    ui->setupUi(this);

    //this->ui->twMostrarLocales->setColumnWidth(0, 90);
    //this->ui->twMostrarLocales->setColumnWidth(1, 180);
    //this->ui->twMostrarLocales->setColumnWidth(2, 290);
    //this->ui->twMostrarLocales->setColumnWidth(3, 160);
}

listarButacasZonaGui::~listarButacasZonaGui()
{
    delete ui;
}

listaZonasClass *listarButacasZonaGui::getLZona() const
{
    return lZona;
}

void listarButacasZonaGui::setLZona(listaZonasClass *value)
{
    lZona = value;
}

listaButacasClass *listarButacasZonaGui::getLButacas() const
{
    return lButacas;
}

void listarButacasZonaGui::setLButacas(listaButacasClass *value)
{
    lButacas = value;
}
