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
    if (ui->codigoLocalTxt->text().length() == 0){
        msje.setText("Debe Ingresar el Codigo del Local");
        msje.exec();
        return;
    }
    if (ui->direccionLocalTxt->toPlainText().length() == 0){
        msje.setText("Debe Ingresar la Direccion del Local");
        msje.exec();
        return;
    }
    local->setCodigoLocal(ui->codigoLocalTxt->text().toStdString());
    local->setDireccionLocal(ui->direccionLocalTxt->toPlainText().toStdString());
    if (ui->habilitarLocalRb->isChecked() == true){
        local->setEstadoLocal(true);
    }else{
        local->setEstadoLocal(false);
    }
    msje.setText("Cliente Registrado Correctamente");
    msje.exec();
   // limpiarControles();
}
