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

listaLotesVacunaClass *almacenClass::getLotes() const
{
    return lotes;
}

void almacenClass::setLotes(listaLotesVacunaClass *value)
{
    lotes = value;
}
almacenClass::almacenClass()
{

}

almacenClass::~almacenClass()
{

}

