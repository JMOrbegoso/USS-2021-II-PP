#include "gestionaratendidos.h"
#include "ui_gestionaratendidos.h"
#include <gui/registrarpaciente.h>

gestionarAtendidos::gestionarAtendidos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarAtendidos)
{
    this->ui->setupUi(this);
    this->ui->listaAtendidosTwidget->setColumnWidth(0,50);
    this->ui->listaAtendidosTwidget->setColumnWidth(1,100);
    this->ui->listaAtendidosTwidget->setColumnWidth(2,100);
    this->ui->listaAtendidosTwidget->setColumnWidth(3,100);
    this->ui->listaAtendidosTwidget->setColumnWidth(4,100);
    this->ui->listaAtendidosTwidget->setColumnWidth(5,100);
    this->ui->listaAtendidosTwidget->setColumnWidth(6,100);
    this->ui->listaAtendidosTwidget->setColumnWidth(7,100);
    this->ui->listaAtendidosTwidget->setColumnWidth(8,100);
    this->ui->listaAtendidosTwidget->setColumnWidth(9,100);
}

gestionarAtendidos::~gestionarAtendidos()
{
    delete ui;
}

void gestionarAtendidos::on_regresarCmd_clicked()
{
    this->close();
}

void gestionarAtendidos::on_registrarOtroPacienteCmd_clicked()
{
    registrarPaciente *regiPaciente = new registrarPaciente();
    regiPaciente->showNormal();
    this->close();
}

void gestionarAtendidos::listaLocalesBox(){
    int i = 0;
    for(int i=0;i < this->locales->getCant();i++){
        ui->elegirLocalCbox->addItem(QString::fromStdString((this->locales->getCab()+i)->getNombreLocal()));
    }
    this->actualizarControles((locales->getCab()+i)->getPacientes());
}

listaPacientesClass *gestionarAtendidos::getPacientes() const
{
    return pacientes;
}

void gestionarAtendidos::setPacientes(listaPacientesClass *value)
{
    pacientes = value;
}

void gestionarAtendidos::actualizarControles(listaPacientesClass *pacientes) {
    pacientes = pacientes == NULL ? this->pacientes : pacientes;

    // Limpia todo el contenido de la tabla
    this->ui->listaAtendidosTwidget->setRowCount(0);
    //this->ui->mostrarPacienteTwidget->clearContents();

    // LLena el contenido de la tabla
    nodoPacienteClass *aux = pacientes->getCab();
    int x = 0;
    while(aux != NULL){
        // Filtrado de pacientes (No muestra a los no atendidos)
        if (aux->getInfo()->getAtencion() == NULL) {
            aux = aux->getSgte();
            continue;
        }

        // Propiedades a mostrar
        auto fecha = aux->getInfo()->getAtencion()->getFecha();
        auto codigo = aux->getInfo()->getCodigo();
        auto dni = aux->getInfo()->getDni();
        auto nombre = aux->getInfo()->getNombre();
        auto apellido = aux->getInfo()->getApellido();
        auto edad = aux->getInfo()->getEdad();
        auto direccion = aux->getInfo()->getDireccion();
        auto enfermedad = aux->getInfo()->getEnfermedad();
        auto enfermeraApellido = aux->getInfo()->getAtencion()->getEnfermera()->getApellido();
        auto enfermeraNombre = aux->getInfo()->getAtencion()->getEnfermera()->getNombre();
        auto enfermera = enfermeraApellido + " " + enfermeraNombre;
        auto vacuna = aux->getInfo()->getAtencion()->getVacuna()->getLote()->getNombre();

        // Inserta nueva fila
        this->ui->listaAtendidosTwidget->insertRow(x);

        // Propiedades en ui
        this->ui->listaAtendidosTwidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(fecha)));
        this->ui->listaAtendidosTwidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->listaAtendidosTwidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(dni)));
        this->ui->listaAtendidosTwidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(nombre)));
        this->ui->listaAtendidosTwidget->setItem(x, 4, new QTableWidgetItem(QString::fromStdString(apellido)));
        this->ui->listaAtendidosTwidget->setItem(x, 5, new QTableWidgetItem(QString::fromStdString(to_string(edad))));
        this->ui->listaAtendidosTwidget->setItem(x, 6, new QTableWidgetItem(QString::fromStdString(direccion)));
        this->ui->listaAtendidosTwidget->setItem(x, 7, new QTableWidgetItem(QString::fromStdString(enfermedad)));
        this->ui->listaAtendidosTwidget->setItem(x, 8, new QTableWidgetItem(QString::fromStdString(vacuna)));
        this->ui->listaAtendidosTwidget->setItem(x, 9, new QTableWidgetItem(QString::fromStdString(enfermera)));

        // Pasa al siguiente nodo
        aux = aux->getSgte();
        x++;
    }
}

listaLocalesClass *gestionarAtendidos::getLocales() const
{
    return locales;
}

void gestionarAtendidos::setLocales(listaLocalesClass *value)
{
    locales = value;
}

void gestionarAtendidos::on_elegirLocalCbox_currentIndexChanged(int index)
{
    // Actualiza los datos del local actual
    auto nombreLocal = (this->locales->getCab() + index)->getDireccionLocal();
    auto direccionLocal = (this->locales->getCab() + index)->getNombreLocal();

    this->ui->nombreLocalTxt->setText(QString::fromStdString(nombreLocal));
    this->ui->direccionLocalTxt->setText(QString::fromStdString(direccionLocal));

    // Actualiza table view
    this->actualizarControles((this->locales->getCab() + index)->getPacientes());

    // Limpia el cuadro de busqueda
    this->ui->buscarAtendidoTxt->clear();
}

