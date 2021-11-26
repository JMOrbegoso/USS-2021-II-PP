#include "registrarlocal.h"
#include "ui_registrarlocal.h"
#include <QMessageBox>
#include <localclass.h>

registrarLocal::registrarLocal(listaLocalesClass* locales, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarLocal)
{
    this->lLo = locales;
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
    if (ui->habilitarLocalRb->isChecked() == true){
        local->setEstadoLocal(true);
    }else{
        local->setEstadoLocal(false);
    }
    this->lLo->insertarLocal(local);
    msje.setText("Local Registrado Correctamente");
    msje.exec();
    limpiarControles();
}

void registrarLocal::limpiarControles()
{
    ui->nombreLocalTxt->clear();
    ui->direccionLocalTxt->clear();
    ui->nombreLocalTxt->setFocus();
}

listaLocalesClass *registrarLocal::getLLo() const
{
    return lLo;
}

void registrarLocal::setLLo(listaLocalesClass *value)
{
    lLo = value;
}

