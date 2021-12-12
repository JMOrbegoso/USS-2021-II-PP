#include "lotegeneralclass.h"

string loteGeneralClass::getCodigo() const
{
    return codigo;
}

void loteGeneralClass::setCodigo(const string &value)
{
    codigo = value;
}

string loteGeneralClass::getNombre() const
{
    return nombre;
}

void loteGeneralClass::setNombre(const string &value)
{
    nombre = value;
}

int loteGeneralClass::getCantidad() const
{
    return cantidad;
}

void loteGeneralClass::setCantidad(int value)
{
    cantidad = value;
}

bool loteGeneralClass::getEstado() const
{
    return estado;
}

void loteGeneralClass::setEstado(bool value)
{
    estado = value;
}

loteGeneralClass::loteGeneralClass()
{

}
