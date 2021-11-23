#include "almacengeneralclass.h"


string almacenGeneralClass::getCodigo() const
{
    return codigo;
}

void almacenGeneralClass::setCodigo(const string &value)
{
    codigo = value;
}

string almacenGeneralClass::getEncargado() const
{
    return encargado;
}

void almacenGeneralClass::setEncargado(const string &value)
{
    encargado = value;
}

string almacenGeneralClass::getDireccion() const
{
    return direccion;
}

void almacenGeneralClass::setDireccion(const string &value)
{
    direccion = value;
}

bool almacenGeneralClass::getEstado() const
{
    return estado;
}

void almacenGeneralClass::setEstado(bool value)
{
    estado = value;
}

listaLotesVacunaGeneralClass *almacenGeneralClass::getLotes() const
{
    return lotes;
}

void almacenGeneralClass::setLotes(listaLotesVacunaGeneralClass *value)
{
    lotes = value;
}
almacenGeneralClass::almacenGeneralClass()
{

}

almacenGeneralClass::~almacenGeneralClass()
{

}

