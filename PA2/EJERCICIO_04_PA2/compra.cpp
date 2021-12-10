#include "compra.h"

string compra::getCodigo() const
{
    return codigo;
}

void compra::setCodigo(const string &value)
{
    codigo = value;
}

string compra::getDni() const
{
    return dni;
}

void compra::setDni(const string &value)
{
    dni = value;
}

string compra::getNombre() const
{
    return nombre;
}

void compra::setNombre(const string &value)
{
    nombre = value;
}

string compra::getApellido() const
{
    return apellido;
}

void compra::setApellido(const string &value)
{
    apellido = value;
}

listaLicoresComprados *compra::getLicores() const
{
    return licores;
}

void compra::setLicores(listaLicoresComprados *value)
{
    licores = value;
}

compra::compra(){
    this->licores = new listaLicoresComprados();
}


