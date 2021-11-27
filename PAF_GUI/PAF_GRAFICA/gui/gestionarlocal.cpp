#include "gestionarlocal.h"
#include "ui_gestionarlocal.h"

gestionarLocal::gestionarLocal( QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarLocal)
{
    ui->setupUi(this);
    this->listLocales = new listaLocalesClass();
    this->ui->twMostrarLocales->setColumnWidth(0, 90);
    this->ui->twMostrarLocales->setColumnWidth(1, 180);
    this->ui->twMostrarLocales->setColumnWidth(2, 290);
    this->ui->twMostrarLocales->setColumnWidth(3, 160);
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
        this->ui->twMostrarLocales->insertRow(x);
        this->ui->twMostrarLocales->setItem(x, 0, new QTableWidgetItem(QString::number((locales->getCab() + x)->getCodigoLocal())));
        this->ui->twMostrarLocales->setItem(x, 1, new QTableWidgetItem(QString::fromStdString((locales->getCab() + x)->getNombreLocal())));
        this->ui->twMostrarLocales->setItem(x, 2, new QTableWidgetItem(QString::fromUtf8((locales->getCab() + x)->getDireccionLocal().c_str())));
        if ((this->listLocales->getCab() + x)->getEstadoLocal() == true){
            this->ui->twMostrarLocales->setItem(x, 3, new QTableWidgetItem((("Habilitado"))));
        }else{
            this->ui->twMostrarLocales->setItem(x, 3, new QTableWidgetItem((("Inhabilitado"))));
        }
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
