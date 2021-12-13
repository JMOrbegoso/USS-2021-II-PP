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
    ui->lotesTableWidget->setColumnWidth(0, 90);
    ui->lotesTableWidget->setColumnWidth(1, 130);
    ui->lotesTableWidget->setColumnWidth(2, 130);
    ui->lotesTableWidget->setColumnWidth(3, 130);
    ui->lotesTableWidget->setColumnWidth(4, 130);
}

gestionarLoteGui::~gestionarLoteGui()
{
    delete ui;
}

/*void gestionarLoteGui::on_habilitarInhabilitarButton_clicked()
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
}*/

listaLocalesClass *gestionarLoteGui::getLocales() const
{
    return this->locales;
}

void gestionarLoteGui::setLocales(listaLocalesClass *value)
{
    this->locales = value;
    //this->setLotes(this->lotes);
}

listaLotesVacunaClass *gestionarLoteGui::getLotes() const
{
    return this->lotes;
}

void gestionarLoteGui::setLotes(listaLotesVacunaClass *value)
{
    this->lotes = value;
    this->actualizarControles(this->getLotes());
}

/*void gestionarLoteGui::listaLocalesCbox(){
<<<<<<< Updated upstream
    for(int i = 0; i < this->locales->getCant(); i++){
        ui->elegirLocalCbox->addItem(QString::fromStdString((this->locales->getCab()+i)->getNombreLocal()));
=======
    for(int i=0;i < this->locales->getCant();i++){
        ui->->addItem(QString::fromStdString((this->locales->getCab()+i)->getNombreLocal()));
>>>>>>> Stashed changes
    }
    this->ui->direccionTxt->setText(QString::fromStdString(this->locales->getCab()->getDireccionLocal()));
}*/

/*void gestionarLoteGui::on_elegirLocalCbox_currentIndexChanged(int index)
{
    auto direccionLocal = (this->locales->getCab() + index)->getDireccionLocal();
    this->ui->direccionTxt->setText(QString::fromStdString(direccionLocal));
    this->actualizarControles(this->lotes);
}*/

void gestionarLoteGui::on_lotesTableWidget_itemClicked(QTableWidgetItem *item)
{
    int row = item->row();
    QTableWidgetItem *nombre = this->ui->lotesTableWidget->item(row, 1);
    QTableWidgetItem *cantidad = this->ui->lotesTableWidget->item(row, 2);
    QTableWidgetItem *fechaCaduca = this->ui->lotesTableWidget->item(row, 3);
    this->ui->editNombreLine->setText(nombre->text());
    this->ui->cantidadEditTxt->setText(cantidad->text());
    this->ui->fechaCaducaEditTxt->setText(fechaCaduca->text());
}

void gestionarLoteGui::on_editarButton_clicked()
{
    int x = this->ui->lotesTableWidget->currentRow();

    //Valores de las cajas de texto
    string nuevoNombre = this->ui->editNombreLine->text().toStdString();
    auto cantidadNueva = this->ui->cantidadEditTxt->text().toStdString();
    string fechaNueva = this->ui->fechaCaducaEditTxt->text().toStdString();
    //Edicion del elemnto de la lista
    (this->lotes->getCab() + x)->setNombre(nuevoNombre);
    //(this->lotes->getCab() + x)->setCantidad(cantidadNueva);
    (this->lotes->getCab() + x)->setCaducidad(cantidadNueva);

    //Edicion del elemnto en la tabla
    this->ui->lotesTableWidget->item(x, 1)->setText(QString::fromStdString(nuevoNombre));
    this->ui->lotesTableWidget->item(x, 2)->setText(QString::fromStdString(cantidadNueva));
    this->ui->lotesTableWidget->item(x, 3)->setText(QString::fromStdString(fechaNueva));
}

void gestionarLoteGui::actualizarControles(listaLotesVacunaClass *lotes)
{
    //condicional de la asignacion != o == a NULL
    lotes = lotes == NULL ? this->lotes : lotes;

    this->ui->lotesTableWidget->setRowCount(0);

    //loteGeneralClass *aux = lotes->getLote();

    for (int x = 0; x < lotes->getCant(); x++){
        auto codigo = (lotes->getCab()+ x)->getCodigo();
        auto nombre = (lotes->getCab() + x)->getNombre();
        auto cantidad = (lotes->getCab() + x)->getCantidad();
        auto fecha = (lotes->getCab() + x)->getCaducidad();
        auto estado = (lotes->getCab() + x)->getEstado();
        auto estadoTexto = estado ? "Usado" : "No Usado";

        this->ui->lotesTableWidget->insertRow(x);

        this->ui->lotesTableWidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->lotesTableWidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(nombre)));
        this->ui->lotesTableWidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(to_string(cantidad))));
        this->ui->lotesTableWidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString((fecha))));
        this->ui->lotesTableWidget->setItem(x, 4, new QTableWidgetItem(QString::fromStdString((estadoTexto))));
    }
}

void gestionarLoteGui::on_buscarLineEdit_textChanged(const QString &arg1)
{
    auto localesFiltradosPorNombre = this->lotes->filtrarPorNombre(arg1.toStdString());
    this->actualizarControles(localesFiltradosPorNombre);
}

void gestionarLoteGui::on_registrarButton_clicked()
{
    registrarLoteGui *lote = new registrarLoteGui();
    lote->setLotes(this->lotes);
    this->close();
    lote->show();
}

void gestionarLoteGui::on_regresarButton_clicked()
{
    this->close();
}
