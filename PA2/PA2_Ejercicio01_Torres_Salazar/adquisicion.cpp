#include "adquisicion.h"

float adquisicion::getPrecioA() const
{
    return precioA;
}

void adquisicion::setPrecioA(float value)
{
    precioA = value;
}

string adquisicion::getPersonaRes() const
{
    return personaRes;
}

void adquisicion::setPersonaRes(const string &value)
{
    personaRes = value;
}

string adquisicion::getNombre() const
{
    return nombre;
}

void adquisicion::setNombre(const string &value)
{
    nombre = value;
}

string adquisicion::getDescripcion() const
{
    return descripcion;
}

void adquisicion::setDescripcion(const string &value)
{
    descripcion = value;
}

string adquisicion::getCodigo() const
{
    return codigo;
}

void adquisicion::setCodigo(const string &value)
{
    codigo = value;
}

adquisicion::adquisicion()
{
    this->precioA = 0.0;
}

adquisicion::adquisicion(string nombre, string descripcion, float precioA, string personaRes)
{
    this->precioA = precioA;
    this->personaRes = personaRes;
    this->nombre = nombre;
    this->descripcion = descripcion;
}

adquisicion::~adquisicion()
{

}

void adquisicion::mostrarProductos(int x){
    basicas::gotoxy(10, 12 + x); cout << this->codigo;
    basicas::gotoxy(30, 12 + x); cout << this->nombre;
    basicas::gotoxy(50, 12 + x); cout << this->descripcion;
    basicas::gotoxy(70, 12 + x); cout << this->personaRes;
    basicas::gotoxy(90, 12 + x); cout << this->precioA;
}

