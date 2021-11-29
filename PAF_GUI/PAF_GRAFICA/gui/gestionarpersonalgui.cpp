#include "gestionarpersonalgui.h"
#include "ui_gestionarpersonalgui.h"

gestionarPersonalGui::gestionarPersonalGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionarPersonalGui)
{
    ui->setupUi(this);

    this->ui->tablePers->setColumnWidth(0, 80);
    this->ui->tablePers->setColumnWidth(1, 150);
    this->ui->tablePers->setColumnWidth(2, 150);
    this->ui->tablePers->setColumnWidth(3, 60);
    this->ui->tablePers->setColumnWidth(4, 100);
    this->ui->tablePers->setColumnWidth(5, 120);
}

gestionarPersonalGui::~gestionarPersonalGui()
{
    delete ui;
}

void gestionarPersonalGui::on_bntVolPers_clicked()
{
    this->close();
}

listaPersonalClass *gestionarPersonalGui::getPersonal() const
{
    return this->personal;
}

void gestionarPersonalGui::setPersonal(listaPersonalClass *value)
{
    this->personal = value;

    this->actualizarControles();
}

listaLocalesClass *gestionarPersonalGui::getLocales() const
{
    return this->locales;
}

void gestionarPersonalGui::setLocales(listaLocalesClass *value)
{
    this->locales = value;

    this->setPersonal(this->locales->getCab()->getPersonales());
}

void gestionarPersonalGui::actualizarControles(listaPersonalClass *personal)
{
    personal = personal == NULL ? this->personal : personal;

    // Limpia todo el contenido de la tabla
    this->ui->tablePers->setRowCount(0);

    // LLena el contenido de la tabla
    int x = 0;
    nodoPersonalClass *aux = personal->getCab();

    while(aux != NULL)
    {
        // Propiedades a mostrar
        auto codigo = aux->getInfo()->getCodigo();
        auto nombre = aux->getInfo()->getNombre();
        auto apellido = aux->getInfo()->getApellido();
        auto edad = aux->getInfo()->getEdad();
        auto dni = aux->getInfo()->getDni();
        auto estadoTexto = aux->getInfo()->getTipoPersonal() ? "Medico" : "Enfermera";

        // Propiedades en ui
        this->ui->tablePers->insertRow(x);
        this->ui->tablePers->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(codigo)));
        this->ui->tablePers->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(nombre)));
        this->ui->tablePers->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(apellido)));
        this->ui->tablePers->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(to_string(edad))));
        this->ui->tablePers->setItem(x, 4, new QTableWidgetItem(QString::fromStdString(dni)));
        this->ui->tablePers->setItem(x, 5, new QTableWidgetItem(QString::fromStdString(estadoTexto)));

        aux = aux->getSgte();
    }
}

void gestionarPersonalGui::addListLocalComBox()
{
    for(int i = 0; i < this->locales->getCant(); i++)
    {
        this->ui->selectLocales->addItem(QString::fromStdString((this->locales->getCab() + i)->getNombreLocal()));
    }

    this->ui->txtDirPers->setText(QString::fromStdString(this->locales->getCab()->getDireccionLocal()));
    auto estadoTexto = (this->locales->getCab())->getEstadoLocal() ? "Habilitado" : "Inhabilitado";
    this->ui->txtEstPers->setText(QString::fromStdString(estadoTexto));
}

void gestionarPersonalGui::on_selectLocales_currentIndexChanged(int index)
{
    int i = index;
    this->ui->txtDirPers->setText(QString::fromStdString((this->locales->getCab() + i)->getDireccionLocal()));
    auto estadoTexto = (this->locales->getCab() + i)->getEstadoLocal() ? "Habilitado" : "Inhabilitado";
    this->ui->txtEstPers->setText(QString::fromStdString(estadoTexto));

    this->setPersonal((this->locales->getCab() + i)->getPersonales());

    this->ui->txtBusPers->clear();
}

void gestionarPersonalGui::on_txtBusPers_textChanged(const QString &arg)
{
    auto personalFiltradoPorDni = this->personal->filtrarPorDni(arg.toStdString());
    this->actualizarControles(personalFiltradoPorDni);
}
