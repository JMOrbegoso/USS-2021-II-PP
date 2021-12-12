#include "gestionarlotegui.h"
#include "ui_gestionarlotegui.h"
#include "QMessageBox"
#include <gui/registrarlotegui.h>

gestionarLoteGui::gestionarLoteGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarLoteGui)
{
    ui->setupUi(this);

    ui->lotesTableWidget->setColumnWidth(0, 60);
    ui->lotesTableWidget->setColumnWidth(1, 90);
    ui->lotesTableWidget->setColumnWidth(2, 80);
    ui->lotesTableWidget->setColumnWidth(3, 80);
    ui->lotesTableWidget->setColumnWidth(4, 80);
}

gestionarLoteGui::~gestionarLoteGui()
{
    delete ui;
}

void gestionarLoteGui::on_habilitarInhabilitarButton_clicked()
{
    int x = this->ui->lotesTableWidget->currentRow();
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

listaLocalesClass *gestionarLoteGui::getLocales() const
{
    return locales;
}

void gestionarLoteGui::setLocales(listaLocalesClass *value)
{
    locales = value;
}

listaLotesVacunaGeneralClass *gestionarLoteGui::getLotesGeneral() const
{
    return lotesGeneral;
}

void gestionarLoteGui::setLotesGeneral(listaLotesVacunaGeneralClass *value)
{
    this->lotesGeneral = value;
    this->actualizarC();
}

void gestionarLoteGui::listaLocalesCbox(){
    for(int i=0;i < this->locales->getCant();i++){
        ui->elegirLocalCbox->addItem(QString::fromStdString((this->locales->getCab()+i)->getNombreLocal()));
    }
    this->ui->direccionTxt->setText(QString::fromStdString(this->locales->getCab()->getDireccionLocal()));
}

void gestionarLoteGui::on_lotesTableWidget_itemClicked(QTableWidgetItem *item)
{
    int row = item->row();
    QTableWidgetItem *nombre = this->ui->lotesTableWidget->item(row, 2);
    QTableWidgetItem *cantidad = this->ui->lotesTableWidget->item(row, 3);
    this->ui->editNombreLine->setText(nombre->text());
    this->ui->cantidadLineEdit->setText(cantidad->text());

}

void gestionarLoteGui::on_editarButton_clicked()
{
    int x = this->ui->lotesTableWidget->currentRow();
    string nombre = this->ui->editNombreLine->text().toStdString();
    string cantidad = this->ui->cantidadLineEdit->text().toStdString();

    (this->lotesGeneral->getLote() + x)->setNombre(nombre);

    this->ui->lotesTableWidget->item(x, 1)->setText(QString::fromStdString(nombre));
    this->ui->lotesTableWidget->item(x, 2)->setText(QString::fromStdString(cantidad));
}

void gestionarLoteGui::actualizarC(listaLotesVacunaGeneralClass *lotes)
{
    lotes = lotes == NULL ? this->lotesGeneral : lotes;

    this->ui->lotesTableWidget->setRowCount(0);

    for (int x = 0; x < lotes->getCant(); x++){
        auto codigo = ( lotes->getLote()+ x)->getCodigo();
        auto nombre = ( lotes->getLote()+ x)->getNombre();
        auto cantidad = ( lotes->getLote()+ x)->getCantidad();
        auto fecha = ( lotes->getLote()+ x)->getFechaCaducidad();
        auto estado = ( lotes->getLote()+ x)->getEstado();
       string estadoTexto = estado ? "Habilitado" : "Inhabilitado";

        this->ui->lotesTableWidget->insertRow(x);

        this->ui->lotesTableWidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->lotesTableWidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(nombre)));
        this->ui->lotesTableWidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(fecha)));
        this->ui->lotesTableWidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(to_string(cantidad))));
        this->ui->lotesTableWidget->setItem(x, 4, new QTableWidgetItem(QString::fromStdString(estadoTexto)));
    }
}
