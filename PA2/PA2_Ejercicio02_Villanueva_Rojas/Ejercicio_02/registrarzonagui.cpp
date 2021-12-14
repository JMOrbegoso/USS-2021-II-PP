#include "registrarzonagui.h"
#include "ui_registrarzonagui.h"

registrarZonaGui::registrarZonaGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarZonaGui)
{
    ui->setupUi(this);
}

registrarZonaGui::~registrarZonaGui()
{
    delete ui;
}


void registrarZonaGui::on_btnCancel_clicked()
{
    this->close();
}

void registrarZonaGui::on_btnRegis_clicked()
{
    //Registrar zona
    QMessageBox msje;

    // Validación
    if (ui->txtNom->text().length() == 0){
        msje.setText("Debe Ingresar el Nombre de la Zona");
        msje.exec();
        return;
    }

    // Datos del formulario
    string nombre = this->ui->txtNom->text().toStdString();
    string direccion = this->ui->dateEdit->text().toStdString();
    double precio = this->ui->SpinBoxPrecio->value();
    int cant = this->ui->spinBoxButacas->value();

    this->lButacas = new listaButacasClass();
    for(int i = 0;i < cant ; i++){
        butacaClass *butaca = new butacaClass();
        lButacas->insertar(butaca);
    }
    // Creación de la nueva instancia
    zonaClass *zona = new zonaClass(nombre, direccion, precio, this->lButacas);

    this->lZonas->insertar(zona);

    // Muestra mensaje del resultado
    msje.setText("Zona Registrada Correctamente");
    msje.exec();

    // Limpia controles del formulario
    this->clear();
}

listaButacasClass *registrarZonaGui::getLButacas() const
{
    return lButacas;
}

void registrarZonaGui::setLButacas(listaButacasClass *value)
{
    lButacas = value;
}

void registrarZonaGui::clear()
{
    this->ui->txtNom->clear();
}

listaZonasClass *registrarZonaGui::getLZonas() const
{
    return lZonas;
}

void registrarZonaGui::setLZonas(listaZonasClass *value)
{
    lZonas = value;
}
