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

almacenClass *vacunatonContraDengueClass::getAlmacenGeneral() const
{
    return this->almacenGeneral;
}

void vacunatonContraDengueClass::setAlmacenGeneral(almacenClass *value)
{
    this->almacenGeneral = value;
}

vacunatonContraDengueClass::vacunatonContraDengueClass()
{
    this->locales = new listaLocalesClass();
    this->almacenGeneral = new almacenClass();
}

vacunatonContraDengueClass::~vacunatonContraDengueClass()
{

}

