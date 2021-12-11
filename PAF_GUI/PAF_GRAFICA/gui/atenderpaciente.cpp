#include "atenderpaciente.h"
#include "ui_atenderpaciente.h"
#include <gui/registrarpaciente.h>
#include <QMessageBox>
#include <gui/gestionaratendidos.h>

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
    QMessageBox msje;

    nodoPacienteClass *auxPaciente;
    atencionClass *auxAtencion;
    nodoPersonalClass *auxEnfermera;
    loteVacunaClass *auxLoteVacuna;

    // Datos a almacenar

    /// Enfermera
    auxEnfermera = this->enfermeras->getCab();
    for(int i = 0; i < this->enfermeras->getCant(); i++){
        if (i == this->ui->enfermerasCBox->currentIndex())
            break;

        auxEnfermera = auxEnfermera->getSgte();
    }

    /// Lote de vacuna
    auxLoteVacuna = this->lotes->getCab() + this->ui->nombreVacunaCbox->currentIndex();

    // Valida
    if (ui->fechaDateTimeEdit->text().length() == 0) {
        msje.setText("Debe ingresar una fecha valida");
        msje.exec();
        return;
    }
    if (auxEnfermera == NULL) {
        msje.setText("Debe ingresar una enfermera valida");
        msje.exec();
        return;
    }
    if (auxLoteVacuna == NULL) {
        msje.setText("Debe ingresar un lote de vacuna valido");
        msje.exec();
        return;
    }

    auto fecha = this->ui->fechaDateTimeEdit->text().toStdString();

    // Crea la atencion
    auxAtencion = new atencionClass(fecha, auxEnfermera->getInfo(), auxLoteVacuna);

    //Paciente
    this->setPacientes((this->locales->getCab() + ui->localesCBox->currentIndex())->getPacientes()); //verificar que empiece en 0?
    int x = ui->mostrarPacientesQwidget->currentRow();
    auxPaciente = this->getPacientes()->getCab();
    for(int i = 0; i < x; i++){
       auxPaciente = auxPaciente->getSgte();
    }

    // Atencion se guarda en el paciente
    auxPaciente->getInfo()->setAtencion(auxAtencion);

    // Actualiza tabla
    this->actualizarControles();
}

listaPersonalClass *atenderPaciente::getEnfermeras() const
{
    return this->enfermeras;
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

listaLotesVacunaClass *atenderPaciente::getLotes() const{
    return this->lotes;
}

void atenderPaciente::setLotes(listaLotesVacunaClass *value){
    this->lotes = value;

    // Limpia el ComboBox de enfermeras
    this->ui->nombreVacunaCbox->clear();

    for(int i = 0; i < this->lotes->getCant(); i++){
        auto lote = (this->lotes->getCab() + i);
        auto nombre = lote->getNombre();
        this->ui->nombreVacunaCbox->addItem(QString::fromStdString(nombre));
    }
}

void atenderPaciente::on_localesCBox_currentIndexChanged(int index)
{
    localClass* localActual = this->locales->getCab() + index;

    // Actualiza los datos del local actual
    auto nombreLocal = localActual->getNombreLocal();
    auto direccionLocal = localActual->getDireccionLocal();

    this->ui->nombreLocalTxt->setText(QString::fromStdString(nombreLocal));
    this->ui->direccionTxt->setText(QString::fromStdString(direccionLocal));

    // Actualiza table view
    this->actualizarControles(localActual->getPacientes());

    // Actualiza ComboBox de enfermeras
    this->setEnfermeras(localActual->getPersonales()->getEnfermeras());

    // Actualiza ComboBox de Lotes
    this->setLotes(localActual->getLotes());

    // Limpia el cuadro de busqueda
    this->ui->buscarPacienteTxt->clear();
}


void atenderPaciente::on_reportesButton_clicked()
{
    gestionarAtendidos *gestA = new gestionarAtendidos();
    gestA->setLocales(this->getLocales());
    gestA->listaLocalesBox();
    gestA->show();
    this->close();
}
