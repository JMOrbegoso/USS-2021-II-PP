#include "localclass.h"
#include <windows.h>

int localClass::contador = 1;

listaPersonalClass *localClass::getPersonales() const
{
    return this->personales;
}
void localClass::setPersonales(listaPersonalClass *value)
{
    this->personales = value;
}

listaPacientesClass *localClass::getPacientes() const
{
    return this->pacientes;
}
void localClass::setPacientes(listaPacientesClass *value)
{
    this->pacientes = value;
}

listaLotesVacunaClass *localClass::getLotes() const
{
    return this->lotes;
}
void localClass::setLotes(listaLotesVacunaClass *value)
{
    this->lotes = value;
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
    this->lotes = new listaLotesVacunaClass();
}

localClass::localClass()
{

}

localClass::~localClass()
{

}

