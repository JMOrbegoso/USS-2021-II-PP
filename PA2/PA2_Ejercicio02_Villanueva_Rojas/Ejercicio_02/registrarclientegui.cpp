#include "registrarclientegui.h"
#include "ui_registrarclientegui.h"

registrarClienteGui::registrarClienteGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarClienteGui)
{
    ui->setupUi(this);
}

registrarClienteGui::~registrarClienteGui()
{
    delete ui;
}

void registrarClienteGui::on_btnCancel_clicked()
{
    this->close();
}

void registrarClienteGui::on_btnRegis_clicked()
{
    //Registrar cliente
    QMessageBox msje;

    if(ui->txtNom->text().length()==0){
        msje.setText("Llene el campo nombre");
        msje.exec(); return;
    }
    if(ui->txtApe->text().length()==0){
        msje.setText("Llene el campo apellido");
        msje.exec(); return;
    }
    if(ui->txtDni->text().length()!=8){
        msje.setText("El campo DNI debe tener 8 dígitos");
        msje.exec(); return;
    }

    const auto nombre = this->ui->txtNom->text().toStdString();
    const auto apellido = this->ui->txtApe->text().toStdString();
    const auto dni = this->ui->txtDni->text().toStdString();
    const auto edad = this->ui->spinBoxEdad->value();
    const auto genero = this->ui->rdbMas->isChecked();

    clienteClass *cli = new clienteClass(nombre, apellido, dni, edad, genero);

    this->lClientes->insertar(cli);

    msje.setText("Personal registrado correctamente");
    msje.exec();
    clear();
}

listaClienteClass *registrarClienteGui::getLClientes() const
{
    return lClientes;
}

void registrarClienteGui::setLClientes(listaClienteClass *value)
{
    lClientes = value;
}

void registrarClienteGui::clear()
{
    ui->txtNom->clear();
    ui->txtApe->clear();
    ui->txtDni->clear();
    ui->spinBoxEdad->setValue(5);
    //ui->rdbFem->setChecked(false);
    //ui->rdbMas->setChecked(true);
}
