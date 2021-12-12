#include "gestionarlotegui.h"
#include "ui_gestionarlotegui.h"
#include "QMessageBox"
#include <gui/registrarlotegui.h>

gestionarLoteGui::gestionarLoteGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarLoteGui)
{
    ui->setupUi(this);
}

gestionarLoteGui::~gestionarLoteGui()
{
    delete ui;
}

void gestionarLoteGui::on_habilitarInhabilitarButton_clicked()
{
    int x = this->ui->lotesListWidget->currentRow();
    loteGeneralClass *item = (this->lotesGeneral->getLote() + x);

    // Mensaje de confirmación
    string titleConfirmation = !item->getEstado() ? "Habilitar Lote" : "Inhabilitar Lote";
    string confirmacion = "¿Está Seguro?";
    QMessageBox::StandardButton confirmape = QMessageBox::question(this,
                                                                     QString::fromStdString(titleConfirmation),
                                                                     QString::fromStdString(confirmacion),
                                                                     QMessageBox::Cancel | QMessageBox::Yes);
    if (confirmape == QMessageBox::Cancel){
        return;
    }

    //Realizar cambios en la lista
    item->setEstado(!item->getEstado());

    //Realizar cambios visuales en la tabla
    string estadoText = item->getEstado() ? "Habilitado" : "Inhabilitado";
    //this->ui->lotesListWidget->item(x, 4)->setText(QString::fromStdString(estadoText));
}

listaLotesVacunaGeneralClass *gestionarLoteGui::getLotesGeneral() const
{
    return lotesGeneral;
}

void gestionarLoteGui::setLotesGeneral(listaLotesVacunaGeneralClass *value)
{
    lotesGeneral = value;
}
