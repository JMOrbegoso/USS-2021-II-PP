#include "almacenclass.h"


string almacenClass::getCodigo() const
{
    return codigo;
}

void almacenClass::setCodigo(const string &value)
{
    codigo = value;
}

string almacenClass::getEncargado() const
{
    return encargado;
}

void almacenClass::setEncargado(const string &value)
{
    encargado = value;
}

string almacenClass::getDireccion() const
{
    return direccion;
}

void almacenClass::setDireccion(const string &value)
{
    direccion = value;
}

bool almacenClass::getEstado() const
{
    return estado;
}

void almacenClass::setEstado(bool value)
{
    estado = value;
}

vacunasLotesListaClass *almacenClass::getLotesDeVacunas() const
{
    return lotesDeVacunas;
}

void almacenClass::setLotesDeVacunas(vacunasLotesListaClass *value)
{
    lotesDeVacunas = value;
}
almacenClass::almacenClass()
{

}

almacenClass::~almacenClass()
{

}

