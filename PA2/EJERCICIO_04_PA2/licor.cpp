#include "licor.h"

int licor::contador = 1;

string licor::getTipo() const
{
    return tipo;
}

void licor::setTipo(const string &value)
{
    tipo = value;
}

float licor::getPrecio() const
{
    return precio;
}

void licor::setPrecio(float value)
{
    precio = value;
}

string licor::getCodigo() const
{
    return codigo;
}

void licor::setCodigo(const string &value)
{
    codigo = value;
}

licor::licor(){
    this->codigo = "Licor-" + to_string(licor::contador);
    licor::contador++;
    this->precio = 0.0;
}

licor::licor(string nombre, string descripcion, string tipo, float precio):licorClass(nombre, descripcion){
    this->tipo = tipo;
    this->precio = precio;
}

void licor::leerLicor(int x){
    system("cls");
    basicas::gotoxy(35,2); cout << "********************************";
    basicas::gotoxy(35,3); cout << "* REGISTRAR MARCA DE LICOR N-" << x+1 << " *";
    basicas::gotoxy(35,4); cout << "********************************";
    basicas::gotoxy(30,5); this->setNombre(basicas::leerTexto("Ingrese el Nombre del Licor: "));
    basicas::gotoxy(30,6); this->setDescripcion(basicas::leerTexto("Ingrese la Descripcion del Licor: "));
    basicas::gotoxy(30,7); this->tipo = basicas::leerTexto("Ingrese el Tipo de Licor: ");
    basicas::gotoxy(30,8); this->precio = basicas::leerMoneda("Ingrese la Fecha del Licor: ");
    system("cls");
    basicas::gotoxy(35,10); cout << "|*LICOR REGISTRADO*|";
    basicas::gotoxy(35,11); cout << " ****************** ";
    basicas::gotoxy(35,12);system("pause");
}
