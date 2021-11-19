#include "atendidoclass.h"


string atendidoClass::getNombreVacuna() const
{
    return nombreVacuna;
}

void atendidoClass::setNombreVacuna(const string &value)
{
    nombreVacuna = value;
}

string atendidoClass::getFecha() const
{
    return fecha;
}

void atendidoClass::setFecha(const string &value)
{
    fecha = value;
}
atendidoClass::atendidoClass()
{

}

atendidoClass::~atendidoClass()
{

}

