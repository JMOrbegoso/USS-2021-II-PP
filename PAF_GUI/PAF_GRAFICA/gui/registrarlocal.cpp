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

    localClass *local = new localClass();
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
    local->setNombreLocal(ui->nombreLocalTxt->text().toStdString());
    local->setDireccionLocal(ui->direccionLocalTxt->toPlainText().toStdString());
    local->setEstadoLocal(ui->habilitarLocalRb->isChecked());

    this->locales->insertarLocal(local);

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

