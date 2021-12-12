#include "registrarlotegui.h"
#include "ui_registrarlotegui.h"
#include <QMessageBox>

registrarLoteGui::registrarLoteGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarLoteGui)
{
    this->lotesGeneral = new listaLotesVacunaGeneralClass();
    ui->setupUi(this);
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
    QMessageBox msje;

    // Validación
    if (ui->nombreLoteTxt->text().length() == 0){
        msje.setText("Debe Ingresar el Nombre del Lote");
        msje.exec();
        return;
    }
    // Datos del formulario
    auto nombre = this->ui->nombreLoteTxt->text().toStdString();
    auto cantidad = this->ui->cantidadVacunaSb->value();
    auto fechaCaducidad = this->ui->fechaCaducidadDe->text().toStdString();
    auto estado = this->ui->habilitarLoteRb->isChecked();

    // Creación de la nueva instancia
    loteGeneralClass *nuevoLote = new loteGeneralClass(nombre, cantidad, fechaCaducidad, estado);

    this->lotesGeneral->insertarLote(nuevoLote);

    // Muestra mensaje del resultado
    msje.setText("Lote Registrado Correctamente");
    msje.exec();

    // Limpia controles del formulario
    this->limpiarControles();
}

void registrarLoteGui::limpiarControles()
{
    ui->nombreLoteTxt->clear();
    ui->cantidadVacunaSb->clear();
    ui->fechaCaducidadDe->clear();
    ui->nombreLoteTxt->setFocus();
}

listaLotesVacunaGeneralClass *registrarLoteGui::getLotesGeneral() const
{
    return lotesGeneral;
}

void registrarLoteGui::setLotesGeneral(listaLotesVacunaGeneralClass *value)
{
    lotesGeneral = value;
}

