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

listaZonasClass *listarButacasZonaGui::getLZonas() const
{
    return lZonas;
}

void listarButacasZonaGui::setLZonas(listaZonasClass *value)
{
    lZonas = value;
}

listaButacasClass *listarButacasZonaGui::getLButacas() const
{
    return lButacas;
}

void listarButacasZonaGui::setLButacas(listaButacasClass *value)
{
    lButacas = value;
}

void listarButacasZonaGui::llenarComBox()
{
    int i = this->lZonas->getCant();
    for(int x = 0;x<i;x++){
        ui->comBoxZona->addItem(QString::fromStdString((this->lZonas->getCab()+x)->getNombre()));
    }
}

void listarButacasZonaGui::on_btnClose_clicked()
{
    this->close();
}
