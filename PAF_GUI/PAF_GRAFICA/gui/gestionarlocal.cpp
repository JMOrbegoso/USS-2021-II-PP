#include "gestionarlocal.h"
#include "ui_gestionarlocal.h"
#include <gui/registrarlocal.h>

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

void gestionarLocal::actualizarControles(listaLocalesClass* locales){
    locales = locales == NULL ? this->locales : locales;

    // Limpia todo el contenido de la tabla
    this->ui->twMostrarLocales->setRowCount(0);

    // LLena el contenido de la tabla
    for (int x = 0; x < locales->getCant(); x++){
        // Propiedades a mostrar
        string codigo = (locales->getCab() + x)->getCodigoLocal();
        string nombre = (locales->getCab() + x)->getNombreLocal();
        string direccion = (locales->getCab() + x)->getDireccionLocal();
        bool estado = (locales->getCab() + x)->getEstadoLocal();
        string estadoTexto = estado ? "Habilitado" : "Inhabilitado";

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
    int x = this->ui->twMostrarLocales->currentRow();
    localClass* item = (this->locales->getCab() + x);
    item->setEstadoLocal(!item->getEstadoLocal());

    string estadoTexto = item->getEstadoLocal() ? "Habilitado" : "Inhabilitado";
    this->ui->twMostrarLocales->item(x, 3)->setText(QString::fromStdString(estadoTexto));
}

void gestionarLocal::on_twMostrarLocales_itemClicked(QTableWidgetItem *item)
{
    int fila = item->row();

    QTableWidgetItem *nombre = this->ui->twMostrarLocales->item(fila, 1);
    QTableWidgetItem *direccion = this->ui->twMostrarLocales->item(fila, 2);

    this->ui->txtNombre->setText(nombre->text());
    this->ui->txtDireccion->setText(direccion->text());
}

void gestionarLocal::on_editarLocalPb_clicked()
{
    int x = this->ui->twMostrarLocales->currentRow();

    // Valores de las cajas de texto
    string nombreNuevo = this->ui->txtNombre->text().toStdString();
    string direccionNueva = this->ui->txtDireccion->text().toStdString();;

    // Edición del elemento de la lista
    (this->locales->getCab() + x)->setNombreLocal(nombreNuevo);
    (this->locales->getCab() + x)->setDireccionLocal(direccionNueva);

    // Edición del elemento en la tabla
    this->ui->twMostrarLocales->item(x, 1)->setText(QString::fromStdString(nombreNuevo));
    this->ui->twMostrarLocales->item(x, 2)->setText(QString::fromStdString(direccionNueva));
}

void gestionarLocal::on_registrarLocalPb_clicked()
{
    registrarLocal *local = new registrarLocal();
    local->setLocales(this->locales);
    local->show();
    //Falta actualizar al cerrar uwu
}

void gestionarLocal::on_buscarLocalTxt_textChanged(const QString &arg)
{
    auto localesFiltradosPorDireccion = this->locales->filtrarPorDireccion(arg.toStdString());
    this->actualizarControles(localesFiltradosPorDireccion);
}
