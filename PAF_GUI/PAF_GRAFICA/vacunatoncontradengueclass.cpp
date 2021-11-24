#include "vacunatoncontradengueclass.h"


string vacunatonContraDengueClass::getEncargado() const
{
    return encargado;
}

void vacunatonContraDengueClass::setEncargado(const string &value)
{
    encargado = value;
}

string vacunatonContraDengueClass::getFechaInicio() const
{
    return fechaInicio;
}

void vacunatonContraDengueClass::setFechaInicio(const string &value)
{
    fechaInicio = value;
}

string vacunatonContraDengueClass::getFechaFinal() const
{
    return fechaFinal;
}

void vacunatonContraDengueClass::setFechaFinal(const string &value)
{
    fechaFinal = value;
}

listaLocalesClass *vacunatonContraDengueClass::getLocales() const
{
    return locales;
}

void vacunatonContraDengueClass::setLocales(listaLocalesClass *value)
{
    locales = value;
}

almacenGeneralClass *vacunatonContraDengueClass::getAlmaGeneral() const
{
    return almaGeneral;
}

void vacunatonContraDengueClass::setAlmaGeneral(almacenGeneralClass *value)
{
    almaGeneral = value;
}

vacunatonContraDengueClass::vacunatonContraDengueClass()
{
    this->locales = new listaLocalesClass();
    this->almaGeneral = new almacenGeneralClass();
}

vacunatonContraDengueClass::~vacunatonContraDengueClass()
{

}

