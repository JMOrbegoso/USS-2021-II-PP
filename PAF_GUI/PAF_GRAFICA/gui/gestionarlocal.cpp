#include "gestionarlocal.h"
#include "ui_gestionarlocal.h"

gestionarLocal::gestionarLocal( QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarLocal)
{
    ui->setupUi(this);

    this->ui->twMostrarLocales->setColumnWidth(0, 90);
    this->ui->twMostrarLocales->setColumnWidth(1, 180);
    this->ui->twMostrarLocales->setColumnWidth(2, 290);
    this->ui->twMostrarLocales->setColumnWidth(3, 160);
}

gestionarLocal::~gestionarLocal()
{
    delete ui;
}

listaLocalesClass *gestionarLocal::getListLocales() const
{
    return this->locales;
}

void gestionarLocal::setListLocales(listaLocalesClass *value)
{
    this->locales = value;
    this->actualizarControles();
}

void gestionarLocal::actualizarControles(){
    for (int x = 0; x < this->locales->getCant(); x++){
        // Propiedades a mostrar
        auto codigo = (this->locales->getCab() + x)->getCodigoLocal();
        auto nombre = (this->locales->getCab() + x)->getNombreLocal();
        auto direccion = (this->locales->getCab() + x)->getDireccionLocal();
        auto estado = (this->locales->getCab() + x)->getEstadoLocal();
        auto estadoTexto = estado ? "Habilitado" : "Inhabilitado";

        // Propiedades en ui
        this->ui->twMostrarLocales->insertRow(x);
        this->ui->twMostrarLocales->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->twMostrarLocales->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(nombre)));
        this->ui->twMostrarLocales->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(direccion)));
        this->ui->twMostrarLocales->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(estadoTexto)));
    }
}

void gestionarLocal::on_regresarPb_clicked()
{
    this->close();
}

void gestionarLocal::on_habilitarInLocalPb_clicked()
{
    for(int i = 0; i < this->listLocales->getCant();i++){
        //if((this->listLocales->getCab()+i)->getNombreLocal() == ui->twMostrarLocales->currentText().toStdString())
            break;
    }
}

void gestionarLocal::on_twMostrarLocales_itemClicked(QTableWidgetItem *item)
{
    int fila;
    fila = item->row();
    QTableWidgetItem *nombre = ui->twMostrarLocales->item(fila, 1);
    QTableWidgetItem *direccion = ui->twMostrarLocales->item(fila, 2);
    ui->txtNombre->setText(nombre->text());
    ui->txtDireccion->setText(direccion->text());
}

void gestionarLocal::on_editarLocalPb_clicked()
{
    for (int x = 0; x < this->listLocales->getCant(); x++){

    }
}
