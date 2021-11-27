#include "localclass.h"
#include <windows.h>

int localClass::contador = 1;

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

string localClass::getNombreLocal() const
{
    return nombreLocal;
}

void localClass::setNombreLocal(const string &value)
{
    nombreLocal = value;
}

string localClass::getCodigoLocal()
{
    return this->codigo;
}

localClass::localClass(string nombre, string direccion, bool estado)
{
    this->codigo = "local-" + to_string(localClass::contador);
    localClass::contador++;

    this->nombreLocal = nombre;
    this->direccionLocal = direccion;
    this->estadoLocal = estado;

    this->personales = new listaPersonalClass();
    this->pacientes = new listaPacientesClass();
    this->almacen = new almacenClass();
}

localClass::localClass()
{

}

localClass::~localClass()
{

}

