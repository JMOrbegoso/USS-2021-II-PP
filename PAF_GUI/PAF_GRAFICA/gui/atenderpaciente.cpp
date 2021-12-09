#include "atenderpaciente.h"
#include "ui_atenderpaciente.h"
#include <gui/registrarpaciente.h>

atenderPaciente::atenderPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atenderPaciente)
{
    ui->setupUi(this);
    ui->mostrarPacientesQwidget->setColumnWidth(0, 60);
    ui->mostrarPacientesQwidget->setColumnWidth(1, 90);
    ui->mostrarPacientesQwidget->setColumnWidth(2, 80);
    ui->mostrarPacientesQwidget->setColumnWidth(3, 150);
    ui->mostrarPacientesQwidget->setColumnWidth(4, 80);
    ui->mostrarPacientesQwidget->setColumnWidth(5, 120);
    ui->mostrarPacientesQwidget->setColumnWidth(6, 130);
}

atenderPaciente::~atenderPaciente()
{
    delete ui;
}

void atenderPaciente::on_regresarButton_clicked()
{
    this->close();
}

void atenderPaciente::on_registrarButton_clicked()
{
    registrarPaciente *regiPaciente = new registrarPaciente();
    regiPaciente->setLocales(this->getLocales());
    regiPaciente->listaLocalComboBox();
    regiPaciente->show();
    this->close();
}

listaPacientesClass *atenderPaciente::getPacientes() const
{
    return pacientes;
}

void atenderPaciente::setPacientes(listaPacientesClass *value)
{
    pacientes = value;
}

listaLocalesClass *atenderPaciente::getLocales() const
{
    return locales;
}

void atenderPaciente::setLocales(listaLocalesClass *value)
{
    locales = value;
}

void atenderPaciente::listaLocalComboBox(){
    for(int x = 0; x<this->getLocales()->getCant();x++){
        this->ui->localesCBox->addItem(QString::fromStdString((this->locales->getCab()+x)->getNombreLocal()));
    }

    ui->direccionTxt->setText(QString::fromStdString(this->locales->getCab()->getDireccionLocal()));
}

void atenderPaciente::actualizarControles(listaPacientesClass *pacientes)
{
    pacientes = pacientes == NULL ? this->pacientes : pacientes;

    // Limpia todo el contenido de la tabla
    this->ui->mostrarPacientesQwidget->setRowCount(0);
    //this->ui->mostrarPacienteTwidget->clearContents();

    // LLena el contenido de la tabla
    nodoPacienteClass *aux = pacientes->getCab();
    int x = 0;
    while(aux != NULL){
        // Filtrado de pacientes (No muestra a los ya atendidos)
        if (aux->getInfo()->getAtencion() != NULL) {
            aux = aux->getSgte();
            continue;
        }

        // Propiedades a mostrar
        auto codigo = aux->getInfo()->getCodigo();
        auto dni = aux->getInfo()->getDni();
        auto nombre = aux->getInfo()->getNombre();
        auto apellido = aux->getInfo()->getApellido();
        auto edad = aux->getInfo()->getEdad();
        auto direccion = aux->getInfo()->getDireccion();
        auto cualEnfermedad = aux->getInfo()->getEnfermedad();

        // Inserta nueva fila
        this->ui->mostrarPacientesQwidget->insertRow(x);

        // Propiedades en ui
        this->ui->mostrarPacientesQwidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->mostrarPacientesQwidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(dni)));
        this->ui->mostrarPacientesQwidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(nombre)));
        this->ui->mostrarPacientesQwidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(apellido)));
        this->ui->mostrarPacientesQwidget->setItem(x, 4, new QTableWidgetItem(QString::fromStdString(to_string(edad))));
        this->ui->mostrarPacientesQwidget->setItem(x, 5, new QTableWidgetItem(QString::fromStdString(direccion)));
        this->ui->mostrarPacientesQwidget->setItem(x, 6, new QTableWidgetItem(QString::fromStdString(cualEnfermedad)));

        // Pasa al siguiente nodo
        aux = aux->getSgte();
        x++;
    }
}

void atenderPaciente::on_atenderButton_clicked()
{
    nodoPacienteClass *aux = new nodoPacienteClass();
    atencionClass *aux1 = new atencionClass();
    nodoPersonalClass *aux2 = new nodoPersonalClass();
    //paciente
    this->setPacientes((this->locales->getCab() + ui->localesCBox->currentIndex())->getPacientes()); //verificar que empiece en 0?
    int x = ui->mostrarPacientesQwidget->currentRow();
    aux = this->getPacientes()->getCab();
    for(int i = 0; i < x; i++){
       aux = aux->getSgte();
    }
    aux->getInfo()->setAtencion(aux1);
    //enfermera
    string enfermera = ui->enfermerasCBox->currentText().toStdString();
    this->enfermeras = (this->locales->getCab() + ui->localesCBox->currentIndex())->getPersonales();
    aux2 = this->enfermeras->getCab();
    while(aux2 != NULL){
        if(aux2->getInfo()->getNombre() == enfermera){
            aux1->setEnfermera(aux2->getInfo());
        }
        aux2 = aux2->getSgte();
    }
    //vacuna

    this->actualizarControles();
}

listaPersonalClass *atenderPaciente::getEnfermeras() const
{
    return enfermeras;
}

void atenderPaciente::setEnfermeras(listaPersonalClass *value)
{
    this->enfermeras = value;

    // Limpia el ComboBox de enfermeras
    this->ui->enfermerasCBox->clear();

    auto aux = this->enfermeras->getCab();

    while(aux != NULL){
        auto nombre = aux->getInfo()->getNombre();
        auto apellido = aux->getInfo()->getApellido();
        auto nombreCompleto = nombre + " " + apellido;

        this->ui->enfermerasCBox->addItem(QString::fromStdString(nombreCompleto));

        aux = aux->getSgte();
    }
}


void atenderPaciente::on_localesCBox_currentIndexChanged(int index)
{
    // Actualiza los datos del local actual
    auto nombreLocal = (this->locales->getCab() + index)->getNombreLocal();
    auto direccionLocal = (this->locales->getCab() + index)->getDireccionLocal();

    this->ui->nombreLocalTxt->setText(QString::fromStdString(nombreLocal));
    this->ui->direccionTxt->setText(QString::fromStdString(direccionLocal));

    // Actualiza table view
    this->actualizarControles((this->locales->getCab() + index)->getPacientes());

    // Actualiza ComboBox de enfermeras
    this->listaEnfermerasCbox((this->locales->getCab()+index)->getPersonales()->getCab());

    // Limpia el cuadro de busqueda
    this->ui->buscarPacienteTxt->clear();
}

