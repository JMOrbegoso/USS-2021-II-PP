#include "registrarlotegui.h"
#include "ui_registrarlotegui.h"
#include <qmessagebox.h>

registrarLoteGui::registrarLoteGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarLoteGui)
{
    ui->setupUi(this);
    this->lotes = new listaLotesVacunaGeneralClass();
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
    // Validación
    if (ui->nombreLoteTxt->text().length() == 0){
        msje->setText("Debe Ingresar el Nombre del Lote");
        msje->exec();
        return;
    }
    // Datos del formulario
    auto nombre = this->ui->nombreLoteTxt->text().toStdString();
    auto cantidad = this->ui->cantidadVacunaSb->value();
    auto fechaCaducidad = this->ui->fechaCaducidadDe->text().toStdString();
    auto estado = this->ui->habilitarLoteRb->isChecked();

    // Creación de la nueva instancia
    loteGeneralClass *nuevoLote = new loteGeneralClass(nombre, cantidad, fechaCaducidad, estado);

    this->lotes->insertarLote(nuevoLote);

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

listaLotesVacunaGeneralClass *registrarLoteGui::getLotes() const
{
    return lotes;
}

void registrarLoteGui::setLotes(listaLotesVacunaGeneralClass *value)
{
    lotes = value;
}

