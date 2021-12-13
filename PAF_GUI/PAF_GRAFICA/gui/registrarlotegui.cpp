#include "registrarlotegui.h"
#include "ui_registrarlotegui.h"
#include <qmessagebox.h>

registrarLoteGui::registrarLoteGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarLoteGui)
{
    ui->setupUi(this);
    this->lotes = new listaLotesVacunaClass();
}

registrarLoteGui::~registrarLoteGui()
{
    delete ui;
}

void registrarLoteGui::on_cancelarButton_clicked()
{
    this->close();
}

void registrarLoteGui::on_registrarButton_clicked()
{
    QMessageBox *msje = new QMessageBox();
    loteVacunaClass *vacu = new loteVacunaClass();
    // Validación
    if (ui->nombreLoteTxt->text().length() == 0){
        msje->setText("Debe Ingresar el Nombre del Lote");
        msje->exec();
        return;
    }
    // Datos del formulario
    vacu->setNombre(this->ui->nombreLoteTxt->text().toStdString());
    vacu->setCantidad(this->ui->cantidadVacunaSb->value());
    vacu->setCaducidad(this->ui->fechaCaducidadDe->text().toStdString());
    //auto estado = this->ui->habilitarLoteRb->setEnabled(false);

    // Creación de la nueva instancia
    //loteVacunaClass *nuevoLote = new loteVacunaClass(nombre, cantidad, fechaCaducidad);
    this->lotes->insertarLote(vacu);

    // Muestra mensaje del resultado
    msje->setText("Lote Registrado Correctamente");
    msje->exec();

    // Limpia controles del formulario
    this->limpiarControles();
}

void registrarLoteGui::limpiarControles()
{
    ui->nombreLoteTxt->clear();
    ui->nombreLoteTxt->setFocus();
}

listaLotesVacunaClass *registrarLoteGui::getLotes() const
{
    return lotes;
}

void registrarLoteGui::setLotes(listaLotesVacunaClass *value)
{
    lotes = value;
}

