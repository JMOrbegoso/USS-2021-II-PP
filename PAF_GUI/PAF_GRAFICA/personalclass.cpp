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

personalClass::personalClass(string nombre, string apellido, string dni, string telefono, string direccion, int edad, float sueldo, string horasTrabajo, bool tipoPersonal) : personaClass(nombre, apellido, dni, telefono, direccion, edad)
{
    this->sueldo = sueldo;
    this->horasTrabajo = horasTrabajo;
    this->tipoPersonal = tipoPersonal;
}

personalClass::personalClass()
{

}

personalClass::~personalClass()
{

}

