#include "marca.h"

int marca::contador = 1;

string marca::getPais() const
{
    return pais;
}

void marca::setPais(const string &value)
{
    pais = value;
}

string marca::getFechaIngreso() const
{
    return fechaIngreso;
}

void marca::setFechaIngreso(const string &value)
{
    fechaIngreso = value;
}

listaLicores *marca::getLicores() const
{
    return licores;
}

void marca::setLicores(listaLicores *value)
{
    licores = value;
}

string marca::getCodigo() const
{
    return codigo;
}

void marca::setCodigo(const string &value)
{
    codigo = value;
}

marca::marca(){
    this->codigo = "Marc-" + to_string(marca::contador);
    marca::contador++;
    this->licores = new listaLicores();
}

marca::marca(string nombre, string descripcion, string pais, string fecha):licorClass(nombre,descripcion){
    this->pais = pais;
    this->fechaIngreso = fecha;
}

void marca::leerMarca(int x){
    system("cls");
    basicas::gotoxy(35,2); cout << "********************************";
    basicas::gotoxy(35,3); cout << "* REGISTRAR MARCA DE LICOR N-" << x+1 << " *";
    basicas::gotoxy(35,4); cout << "********************************";
    basicas::gotoxy(30,5); this->setNombre(basicas::leerTexto("Ingrese el Nombre de la Marca de Licor: "));
    basicas::gotoxy(30,6); this->setDescripcion(basicas::leerTexto("Ingrese la Descripcion de la Marca: "));
    basicas::gotoxy(30,7); this->pais = basicas::leerTexto("Ingrese el Pais de la Marca: ");
    basicas::gotoxy(30,8); this->fechaIngreso = basicas::leerTexto("Ingrese la Fecha de Ingreso de la Marca: ");
    system("cls");
    basicas::gotoxy(35,10); cout << "|*MARCA REGISTRADA*|";
    basicas::gotoxy(35,11); cout << " ****************** ";
    basicas::gotoxy(35,12);system("pause");
}
