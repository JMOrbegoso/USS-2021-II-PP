#include "gestionarlotegui.h"
#include "ui_gestionarlotegui.h"
#include "QMessageBox"
#include <gui/registrarlotegui.h>

gestionarLoteGui::gestionarLoteGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarLoteGui)
{
    ui->setupUi(this);
    this->lotes = new listaLotesVacunaClass();
    ui->lotesTableWidget->setColumnWidth(0, 60);
    ui->lotesTableWidget->setColumnWidth(1, 90);
    ui->lotesTableWidget->setColumnWidth(2, 80);
    ui->lotesTableWidget->setColumnWidth(3, 80);
}

gestionarLoteGui::~gestionarLoteGui()
{
    delete ui;
}

void gestionarLoteGui::on_habilitarInhabilitarButton_clicked()
{
    int x = this->ui->lotesTableWidget->currentRow();
    loteVacunaClass *item = (this->lotes->getCab() + x);

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
    this->ui->lotesTableWidget->item(x, 4)->setText(QString::fromStdString(estadoText));
}

listaLocalesClass *gestionarLoteGui::getLocales() const
{
    return this->locales;
}

void gestionarLoteGui::setLocales(listaLocalesClass *value)
{
    this->locales = value;
    this->setLotes(this->lotes);
}

listaLotesVacunaClass *gestionarLoteGui::getLotes() const
{
    return this->lotes;
}

void gestionarLoteGui::setLotes(listaLotesVacunaClass *value)
{
    this->lotes = value;
    this->actualizarControles();
}

void gestionarLoteGui::listaLocalesCbox(){
    for(int i=0;i < this->locales->getCant();i++){
        ui->elegirLocalCbox->addItem(QString::fromStdString((this->locales->getCab()+i)->getNombreLocal()));
    }
    this->ui->direccionTxt->setText(QString::fromStdString(this->locales->getCab()->getDireccionLocal()));
}

void gestionarLoteGui::on_elegirLocalCbox_currentIndexChanged(int index)
{
    auto direccionLocal = (this->locales->getCab() + index)->getDireccionLocal();
    this->ui->direccionTxt->setText(QString::fromStdString(direccionLocal));
    this->actualizarControles(this->lotes);
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

    //Valores de las cajas de texto
    string nuevoNombre = this->ui->editNombreLine->text().toStdString();
    string cantidadNueva = this->ui->cantidadLineEdit->text().toStdString();

    //Edicion del elemnto de la lista
    (this->lotes->getCab() + x)->setNombre(nuevoNombre);
    //(this->lotesGeneral->getLote() + x)->setCantidad(cantidadNueva);

    //Edicion del elemnto en la tabla
    this->ui->lotesTableWidget->item(x, 1)->setText(QString::fromStdString(nuevoNombre));
    this->ui->lotesTableWidget->item(x, 2)->setText(QString::fromStdString(cantidadNueva));
}

void gestionarLoteGui::actualizarControles(listaLotesVacunaClass *lotes)
{
    lotes = lotes == NULL ? this->lotes : lotes;

    this->ui->lotesTableWidget->setRowCount(0);

    //loteGeneralClass *aux = lotes->getLote();

    for (int x = 0; x < lotes->getCant(); x++){
        auto codigo = (lotes->getCab()+ x)->getCodigo();
        auto nombre = (lotes->getCab() + x)->getNombre();
        auto cantidad = (lotes->getCab() + x)->getCantidad();
        //auto estado = (lotes->getCab() + x)->getEstado();
        //string estadoTexto = estado ? "Habilitado" : "Inhabilitado";

        this->ui->lotesTableWidget->insertRow(x);

        this->ui->lotesTableWidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->lotesTableWidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(nombre)));
        this->ui->lotesTableWidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(to_string(cantidad))));
        //this->ui->lotesTableWidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString((estadoTexto))));
    }
}
