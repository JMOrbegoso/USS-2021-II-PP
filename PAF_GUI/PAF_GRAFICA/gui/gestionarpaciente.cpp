#include "gestionarpaciente.h"
#include "gestionarpaciente.h"
#include "ui_gestionarpaciente.h"
#include <gui/registrarpaciente.h>

gestionarPaciente::gestionarPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarPaciente)
{
    ui->setupUi(this);
    ui->mostrarPacienteTwidget->setColumnWidth(0, 60);
    ui->mostrarPacienteTwidget->setColumnWidth(1, 90);
    ui->mostrarPacienteTwidget->setColumnWidth(2, 80);
    ui->mostrarPacienteTwidget->setColumnWidth(3, 150);
    ui->mostrarPacienteTwidget->setColumnWidth(4, 80);
    ui->mostrarPacienteTwidget->setColumnWidth(5, 120);
    ui->mostrarPacienteTwidget->setColumnWidth(6, 130);
}

gestionarPaciente::~gestionarPaciente()
{
    delete ui;
}

void gestionarPaciente::on_regresarCmd_clicked()
{
    this->close();
}

void gestionarPaciente::on_registrarPacienteCmd_clicked()
{
    registrarPaciente *regiPaciente = new registrarPaciente();
    regiPaciente->setLocales(this->getLocales());
    regiPaciente->listaLocalComboBox();
    regiPaciente->show();
    this->close();
}

listaPacientesClass *gestionarPaciente::getPacientes() const
{
    return this->pacientes;
}

void gestionarPaciente::setPacientes(listaPacientesClass *value)
{
    this->pacientes = value;
    this->actualizarControles();
}

listaLocalesClass *gestionarPaciente::getLocales() const
{
    return this->locales;
}

void gestionarPaciente::setLocales(listaLocalesClass *value)
{
    locales = value;
   this->setPacientes(this->locales->getCab()->getPacientes());
}

void gestionarPaciente::listaLocalComboBox()
{
    for(int i=0;i < this->locales->getCant();i++){
        ui->elegirLocalCbox->addItem(QString::fromStdString((this->locales->getCab()+i)->getNombreLocal()));
    }
    this->ui->direccionTxt->setText(QString::fromStdString(this->locales->getCab()->getDireccionLocal()));
    this->ui->nombreLocalTxt->setText(QString::fromStdString(this->locales->getCab()->getNombreLocal()));
}

void gestionarPaciente::actualizarControles(listaPacientesClass *pacientes)
{
    pacientes = pacientes == NULL ? this->pacientes : pacientes;

    // Limpia todo el contenido de la tabla
    this->ui->mostrarPacienteTwidget->setRowCount(0);
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
        this->ui->mostrarPacienteTwidget->insertRow(x);

        // Propiedades en ui
        this->ui->mostrarPacienteTwidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->mostrarPacienteTwidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(dni)));
        this->ui->mostrarPacienteTwidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(nombre)));
        this->ui->mostrarPacienteTwidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(apellido)));
        this->ui->mostrarPacienteTwidget->setItem(x, 4, new QTableWidgetItem(QString::fromStdString(to_string(edad))));
        this->ui->mostrarPacienteTwidget->setItem(x, 5, new QTableWidgetItem(QString::fromStdString(direccion)));
        this->ui->mostrarPacienteTwidget->setItem(x, 6, new QTableWidgetItem(QString::fromStdString(cualEnfermedad)));

        // Pasa al siguiente nodo :)
        aux = aux->getSgte();
        x++;
    }
}

void gestionarPaciente::on_buscarPacienteTxt_textChanged(const QString &arg)
{
    auto busquedaPaciente = this->pacientes->buscarDni(arg.toStdString());
    this->actualizarControles(busquedaPaciente);
}

void gestionarPaciente::on_mostrarPacienteTwidget_itemClicked(QTableWidgetItem *item)
{
    int row = item->row();
    QTableWidgetItem *dni = this->ui->mostrarPacienteTwidget->item(row, 1);
    QTableWidgetItem *nombre = this->ui->mostrarPacienteTwidget->item(row, 2);
    QTableWidgetItem *apellido = this->ui->mostrarPacienteTwidget->item(row, 3);
    QTableWidgetItem *edad = this->ui->mostrarPacienteTwidget->item(row, 4);
    QTableWidgetItem *direccion = this->ui->mostrarPacienteTwidget->item(row, 5);
    this->ui->editarDniTxt->setText(dni->text());
    this->ui->editarNombreTxt->setText(nombre->text());
    this->ui->editarApellidosTxt->setText(apellido->text());
    this->ui->editarDireccionTxt->setText(direccion->text());
    this->ui->editarEdadTxt->setText(edad->text());
}

void gestionarPaciente::on_editarCmd_clicked()
{
    int x = this->ui->mostrarPacienteTwidget->currentRow();
    string dni = this->ui->editarDniTxt->text().toStdString();
    string nombre = this->ui->editarNombreTxt->text().toStdString();
    string apellido = this->ui->editarApellidosTxt->text().toStdString();
    string edad = this->ui->editarEdadTxt->text().toStdString();
    string direccion = this->ui->editarDireccionTxt->text().toStdString();

    (this->pacientes->getCab() + x)->getInfo()->setDni(dni);
    (this->pacientes->getCab() + x)->getInfo()->setNombre(nombre);
    (this->pacientes->getCab() + x)->getInfo()->setApellido(apellido);
    (this->pacientes->getCab() + x)->getInfo()->setDireccion(direccion);

    this->ui->mostrarPacienteTwidget->item(x, 1)->setText(QString::fromStdString(dni));
    this->ui->mostrarPacienteTwidget->item(x, 2)->setText(QString::fromStdString(nombre));
    this->ui->mostrarPacienteTwidget->item(x, 3)->setText(QString::fromStdString(apellido));
    this->ui->mostrarPacienteTwidget->item(x, 4)->setText(QString::fromStdString(edad));
    this->ui->mostrarPacienteTwidget->item(x, 5)->setText(QString::fromStdString(direccion));
}

void gestionarPaciente::on_elegirLocalCbox_currentIndexChanged(int index)
{
    // Actualiza los datos del local actual
    auto nombreLocal = (this->locales->getCab() + index)->getDireccionLocal();
    auto direccionLocal = (this->locales->getCab() + index)->getNombreLocal();

    this->ui->nombreLocalTxt->setText(QString::fromStdString(nombreLocal));
    this->ui->direccionTxt->setText(QString::fromStdString(direccionLocal));

    // Actualiza table view
    this->actualizarControles((this->locales->getCab() + index)->getPacientes());

    // Limpia el cuadro de busqueda
    this->ui->buscarPacienteTxt->clear();
}

