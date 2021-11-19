#include "doctorclass.h"


float doctorClass::getSueldo() const
{
    return sueldo;
}

void doctorClass::setSueldo(float value)
{
    sueldo = value;
}

string doctorClass::getHorasTrabajo() const
{
    return horasTrabajo;
}

void doctorClass::setHorasTrabajo(const string &value)
{
    horasTrabajo = value;
}
doctorClass::doctorClass()
{

}

doctorClass::~doctorClass()
{

}

