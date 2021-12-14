#include "registrarventaticketgui.h"
#include "ui_registrarventaticketgui.h"

registrarVentaTicketGui::registrarVentaTicketGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarVentaTicketGui)
{
    ui->setupUi(this);

    this->ui->tableButaca->setColumnWidth(0, 180);
    this->ui->tableButaca->setColumnWidth(1, 180);
}

registrarVentaTicketGui::~registrarVentaTicketGui()
{
    delete ui;
}

void registrarVentaTicketGui::on_btnCancel_clicked()
{
    this->close();
}

void registrarVentaTicketGui::on_btnRegis_clicked()
{
    // Registrar Venta Ticket
    nodoButacasClass *aux = this->lButacas->getCab();
    // Butaca
    if(this->ui->tableButaca->currentRow() != -1){
        int i = this->ui->tableButaca->currentRow();

        for(int x = 0; x < i; x++)
            aux = aux->getSgte();

        if(aux->getInfo()->getEstado()){
            QMessageBox msje;
            msje.setText("Butaca ocupada");
            msje.exec();
            return;
        }
    }else{
        bool sinButacas = TRUE;
        while(aux != NULL){
            if(aux->getInfo()->getEstado() == FALSE){
                sinButacas = FALSE;
                break;
            }
            aux = aux->getSgte();
        }
        if(sinButacas){
            QMessageBox msje;
            msje.setText("No hay más butacas disponibles");
            msje.exec();
            return;
        }
    }
    aux->getInfo()->setEstado(TRUE);

    nodoClienteClass *aux2 = this->getLClientes()->getCab();
    nodoTrabajadorClass *aux3 = this->getLTrabaj()->getCab();
    // Cliente
    while(aux2 != NULL){
        if((aux2->getInfo()->getNombre() + " " + aux2->getInfo()->getApelli()) == this->ui->comBoxCli->currentText().toStdString())
            break;
        aux2 = aux2->getSgte();
    }
    aux->getInfo()->setCliente(aux2->getInfo());
    // Trabajadores
    while(aux3 != NULL){
        if((aux3->getInfo()->getNombre() + " " + aux3->getInfo()->getApelli()) == this->ui->comBoxTrab->currentText().toStdString())
            break;
        aux3 = aux3->getSgte();
    }
    // Zona
    int i = this->ui->comBoxZona->currentIndex();
    string nombre = (this->lZonas->getCab()+i)->getNombre();
    string fechaF = (this->lZonas->getCab()+i)->getFechaF();
    double precio = (this->lZonas->getCab()+i)->getPrecio();
    // Ticket
    ticketClass *ticket = new ticketClass(aux->getInfo(), aux3->getInfo(), nombre, fechaF, precio);

    this->lTickets->insertar(ticket);

    actualizarTabla();
}

listaButacasClass *registrarVentaTicketGui::getLButacas() const
{
    return lButacas;
}

void registrarVentaTicketGui::setLButacas(listaButacasClass *value)
{
    lButacas = value;
}

void registrarVentaTicketGui::llenarComBoxZona()
{
    int i = this->lZonas->getCant();
    for(int x = 0;x<i;x++)
        ui->comBoxZona->addItem(QString::fromStdString((this->lZonas->getCab()+x)->getNombre()));
    updateData(0);
    actualizarTabla();
}

void registrarVentaTicketGui::llenarComBoxClie()
{
    nodoClienteClass *aux = this->lClientes->getCab();
    while(aux != NULL){
        ui->comBoxCli->addItem(QString::fromStdString(aux->getInfo()->getNombre() + " " + aux->getInfo()->getApelli()));
        aux = aux->getSgte();
    }
    updateCli(this->lClientes->getCab()->getInfo());
}

void registrarVentaTicketGui::llenarComBoxTrab()
{
    nodoTrabajadorClass *aux = this->lTrabaj->getCab();
    while(aux != NULL){
        ui->comBoxTrab->addItem(QString::fromStdString(aux->getInfo()->getNombre() + " " + aux->getInfo()->getApelli()));
        aux = aux->getSgte();
    }
}

void registrarVentaTicketGui::actualizarTabla()
{
    ui->tableButaca->setRowCount(0);
    nodoButacasClass *aux = this->lButacas->getCab();
    int i = 0;
    while(aux != NULL){
        string codigo = aux->getInfo()->getCodigo();
        string estado = aux->getInfo()->getEstado() ? "Ocupado" : "Libre";

        this->ui->tableButaca->insertRow(i);
        this->ui->tableButaca->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->tableButaca->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(estado)));

        if(aux->getInfo()->getEstado()){
            this->ui->tableButaca->item(i,0)->setBackgroundColor(QColor::fromRgb(255,70,70));
            this->ui->tableButaca->item(i,1)->setBackgroundColor(QColor::fromRgb(255,70,70));
        }else{
            this->ui->tableButaca->item(i,0)->setBackgroundColor(QColor::fromRgb(163,255,71));
            this->ui->tableButaca->item(i,1)->setBackgroundColor(QColor::fromRgb(163,255,71));
        }

        aux = aux->getSgte();
        i++;
    }
}

void registrarVentaTicketGui::updateData(int i)
{
    ui->labelFecha->setText(QString::fromStdString((this->lZonas->getCab()+i)->getFechaF()));
    ui->labelPrecio->setText(QString::fromStdString("S./"+to_string((this->lZonas->getCab()+i)->getPrecio())));
    int x = 0;
    nodoButacasClass *aux = this->lButacas->getCab();
    while(aux != NULL){
        if(aux->getInfo()->getEstado() == FALSE)
            x++;
        aux = aux->getSgte();
    }
    ui->labelCantBut->setText(QString::fromStdString(to_string(x)));
}

void registrarVentaTicketGui::updateCli(clienteClass *cli)
{
    ui->labelCodigo->setText(QString::fromStdString(cli->getCodigo()));
    ui->labelDni->setText(QString::fromStdString(cli->getDniPer()));
    string genero = cli->getGenero() ? "Masculino" : "Femenino";
    ui->label_Genero->setText(QString::fromStdString(genero));
    ui->label_Edad->setText(QString::fromStdString(to_string(cli->getEdaPer())));
}

listaZonasClass *registrarVentaTicketGui::getLZonas() const
{
    return lZonas;
}

void registrarVentaTicketGui::setLZonas(listaZonasClass *value)
{
    lZonas = value;
}

listaClienteClass *registrarVentaTicketGui::getLClientes() const
{
    return lClientes;
}

void registrarVentaTicketGui::setLClientes(listaClienteClass *value)
{
    lClientes = value;
}

listaTrabajadoresClass *registrarVentaTicketGui::getLTrabaj() const
{
    return lTrabaj;
}

void registrarVentaTicketGui::setLTrabaj(listaTrabajadoresClass *value)
{
    lTrabaj = value;
}

listaTicketsClass *registrarVentaTicketGui::getLTickets() const
{
    return lTickets;
}

void registrarVentaTicketGui::setLTickets(listaTicketsClass *value)
{
    lTickets = value;
}

void registrarVentaTicketGui::on_comBoxZona_currentIndexChanged(int index)
{
    updateData(index);
    this->setLButacas((this->lZonas->getCab()+index)->getLButacas());
    actualizarTabla();
}

void registrarVentaTicketGui::on_comBoxCli_currentIndexChanged(const QString &arg1)
{
    nodoClienteClass *aux = this->lClientes->getCab();
    while(aux != NULL){
        if((aux->getInfo()->getNombre() + " " + aux->getInfo()->getApelli()) == arg1.toStdString())
            break;
        aux = aux->getSgte();
    }
    updateCli(aux->getInfo());
}
