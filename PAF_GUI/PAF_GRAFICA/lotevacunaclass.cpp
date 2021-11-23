#include "lotevacunaclass.h"


string loteVacunaClass::getNombre() const
{
    return nombre;
}

void loteVacunaClass::setNombre(const string &value)
{
    nombre = value;
}

int loteVacunaClass::getCantidad() const
{
    return cantidad;
}

void loteVacunaClass::setCantidad(int value)
{
    cantidad = value;
}

string loteVacunaClass::getCaducidad() const
{
    return caducidad;
}

void loteVacunaClass::setCaducidad(const string &value)
{
    caducidad = value;
}

bool loteVacunaClass::getEstado() const
{
    return estado;
}

void loteVacunaClass::setEstado(bool value)
{
    estado = value;
}
loteVacunaClass::loteVacunaClass()
{

}

loteVacunaClass::~loteVacunaClass()
{

}

