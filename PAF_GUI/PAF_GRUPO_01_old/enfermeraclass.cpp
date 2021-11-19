#include "enfermeraclass.h"


float enfermeraClass::getSueldo() const
{
    return sueldo;
}

void enfermeraClass::setSueldo(float value)
{
    sueldo = value;
}

string enfermeraClass::getHorasTrabajo() const
{
    return horasTrabajo;
}

void enfermeraClass::setHorasTrabajo(const string &value)
{
    horasTrabajo = value;
}
enfermeraClass::enfermeraClass()
{

}

enfermeraClass::~enfermeraClass()
{

}

