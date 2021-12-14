#include "listarbutacaszonagui.h"
#include "ui_listarbutacaszonagui.h"

listarButacasZonaGui::listarButacasZonaGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listarButacasZonaGui)
{
    ui->setupUi(this);

    this->ui->tableButaca->setColumnWidth(0, 90);
    this->ui->tableButaca->setColumnWidth(1, 90);
    this->ui->tableButaca->setColumnWidth(2, 180);
    this->ui->tableButaca->setColumnWidth(3, 90);
}

listarButacasZonaGui::~listarButacasZonaGui()
{
    delete ui;
}

listaZonasClass *listarButacasZonaGui::getLZonas() const
{
    return lZonas;
}

void listarButacasZonaGui::setLZonas(listaZonasClass *value)
{
    lZonas = value;
}

listaButacasClass *listarButacasZonaGui::getLButacas() const
{
    return lButacas;
}

void listarButacasZonaGui::setLButacas(listaButacasClass *value)
{
    lButacas = value;
}

void listarButacasZonaGui::llenarComBox()
{
    int i = this->lZonas->getCant();
    for(int x = 0;x<i;x++)
        ui->comBoxZona->addItem(QString::fromStdString((this->lZonas->getCab()+x)->getNombre()));
    updateDate(0);
    actualizarTabla();
}

void listarButacasZonaGui::actualizarTabla()
{
    ui->tableButaca->setRowCount(0);
    nodoButacasClass *aux = this->lButacas->getCab();
    int i = 0;
    while(aux != NULL){
        string codigo = aux->getInfo()->getCodigo();
        string estado = aux->getInfo()->getEstado() ? "Ocupado" : "Libre";
        string nomApe;
        string edad;
        if(aux->getInfo()->getCliente() != NULL){
            string nombre = aux->getInfo()->getCliente()->getNombre();
            string apelli = aux->getInfo()->getCliente()->getApelli();
            edad = to_string(aux->getInfo()->getCliente()->getEdaPer());
            nomApe = nombre + " " + apelli;
        }else{
            nomApe = "-";
            edad = to_string(0);
        }

        this->ui->tableButaca->insertRow(i);
        this->ui->tableButaca->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->tableButaca->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(estado)));
        this->ui->tableButaca->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(nomApe)));
        this->ui->tableButaca->setItem(i, 3, new QTableWidgetItem(QString::fromStdString(edad)));
        aux = aux->getSgte();
        i++;
    }
}

void listarButacasZonaGui::updateDate(int i)
{
    this->ui->fechaF->setText(QString::fromStdString((this->lZonas->getCab()+i)->getFechaF()));
    this->ui->precio->setText(QString::fromStdString("S/." +to_string((this->lZonas->getCab()+i)->getPrecio())));
}

void listarButacasZonaGui::on_btnClose_clicked()
{
    this->close();
}

void listarButacasZonaGui::on_comBoxZona_currentIndexChanged(int index)
{
    updateDate(index);
    this->setLButacas((this->lZonas->getCab()+index)->getLButacas());
    actualizarTabla();
}
