#include "gestionarlocal.h"
#include "ui_gestionarlocal.h"

gestionarLocal::gestionarLocal( QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarLocal)
{
    ui->setupUi(this);
    this->ui->twMostrarLocales->setColumnWidth(0, 120);
    this->ui->twMostrarLocales->setColumnWidth(1, 180);
    this->ui->twMostrarLocales->setColumnWidth(2, 280);
    this->ui->twMostrarLocales->setColumnWidth(3, 150);
    /*
    for (int x = 0; x < locales->getCant(); x++) {
        string direccion = (*(locales->getLocal() + x)).getDireccionLocal();
        QString qDireccion = QString::fromStdString(direccion);

        QListWidgetItem *item = new QListWidgetItem;
        item->setText(qDireccion);
        ui->listaLocalesCv->addItem(item);
    }
    */
}

gestionarLocal::~gestionarLocal()
{
    delete ui;
}

listaLocalesClass *gestionarLocal::getListLocales() const
{
    return listLocales;
}

void gestionarLocal::setListLocales(listaLocalesClass *value)
{
    listLocales = value;
}

void gestionarLocal::mostrarListaLocales(listaLocalesClass *locales){
    for (int x = 0; x < locales->getCant(); x++){
        this->ui->twMostrarLocales->setItem(x, 0, new QTableWidgetItem(QString::number((locales->getCab() + x)->getCodigoLocal())));
        this->ui->twMostrarLocales->setItem(x, 1, new QTableWidgetItem(QString::fromUtf8((locales->getCab() + x)->getNombreLocal().c_str())));
        this->ui->twMostrarLocales->setItem(x, 2, new QTableWidgetItem(QString::fromUtf8((locales->getCab() + x)->getDireccionLocal().c_str())));
        //this->ui->twMostrarLocales->setItem(x, 0, new QTableWidgetItem(QString::bool((this->listLocales->getCab() + x)->getEstadoLocal().c_str())));
    }
}

