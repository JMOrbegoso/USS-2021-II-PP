#include "registrarlocal.h"
#include "ui_registrarlocal.h"
#include <QMessageBox>
#include <localclass.h>

registrarLocal::registrarLocal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarLocal)
{
    ui->setupUi(this);
}

registrarLocal::~registrarLocal()
{
    delete ui;
}

void registrarLocal::on_cancelarLocalPb_clicked()
{
    this->close();
}

void registrarLocal::on_registrarLocalPb_clicked()
{
    QMessageBox msje;

    // Validación
    if (ui->nombreLocalTxt->text().length() == 0){
        msje.setText("Debe Ingresar el Nombre del Local");
        msje.exec();
        return;
    }
    if (ui->direccionLocalTxt->toPlainText().length() == 0){
        msje.setText("Debe Ingresar la Direccion del Local");
        msje.exec();
        return;
    }

    // Datos del formulario
    string nombre = this->ui->nombreLocalTxt->text().toStdString();
    string direccion = this->ui->direccionLocalTxt->toPlainText().toStdString();
    bool estado = this->ui->habilitarLocalRb->isChecked();

    // Creación de la nueva instancia
    localClass *nuevoLocal = new localClass(nombre, direccion, estado);

    this->locales->insertarLocal(nuevoLocal);

    // Muestra mensaje del resultado
    msje.setText("Local Registrado Correctamente");
    msje.exec();

    // Limpia controles del formulario
    this->limpiarControles();
}

void registrarLocal::limpiarControles()
{
    ui->nombreLocalTxt->clear();
    ui->direccionLocalTxt->clear();
    ui->nombreLocalTxt->setFocus();
}

listaLocalesClass *registrarLocal::getLocales() const
{
    return this->locales;
}

void registrarLocal::setLocales(listaLocalesClass *value)
{
    this->locales = value;
}

