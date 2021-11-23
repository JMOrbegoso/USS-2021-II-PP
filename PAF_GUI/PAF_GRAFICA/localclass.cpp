#include "localclass.h"


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
localClass::localClass()
{

}

localClass::~localClass()
{

}

