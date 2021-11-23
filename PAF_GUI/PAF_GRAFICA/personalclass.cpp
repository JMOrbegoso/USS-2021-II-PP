#include "personalclass.h"


float personalClass::getSueldo() const
{
    return sueldo;
}

void personalClass::setSueldo(float value)
{
    sueldo = value;
}

string personalClass::getHorasTrabajo() const
{
    return horasTrabajo;
}

void personalClass::setHorasTrabajo(const string &value)
{
    horasTrabajo = value;
}

bool personalClass::getTipoPersonal() const
{
    return tipoPersonal;
}

void personalClass::setTipoPersonal(bool value)
{
    tipoPersonal = value;
}
personalClass::personalClass()
{

}

personalClass::~personalClass()
{

}

