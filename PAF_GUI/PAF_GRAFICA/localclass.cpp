#include "localclass.h"
#include <windows.h>

listaPersonalClass *localClass::getPersonales() const
{
    return personales;
}

void localClass::setPersonales(listaPersonalClass *value)
{
    personales = value;
}

listaPacientesClass *localClass::getPacientes() const
{
    return pacientes;
}

void localClass::setPacientes(listaPacientesClass *value)
{
    pacientes = value;
}

almacenClass *localClass::getAlmacen() const
{
    return almacen;
}

void localClass::setAlmacen(almacenClass *value)
{
    almacen = value;
}

string localClass::getDireccionLocal() const
{
    return direccionLocal;
}

void localClass::setDireccionLocal(const string &value)
{
    direccionLocal = value;
}

bool localClass::getEstadoLocal() const
{
    return estadoLocal;
}

void localClass::setEstadoLocal(bool value)
{
    estadoLocal = value;
}

localClass::localClass()
{
    this->estadoLocal = TRUE;
    this->personales = new listaPersonalClass();
    this->pacientes = new listaPacientesClass();
    this->almacen = new almacenClass();
}

localClass::~localClass()
{

}

