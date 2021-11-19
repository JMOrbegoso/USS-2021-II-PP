#include "listavacunaloteclass.h"


vacunaLoteClass *listaVacunaLoteClass::getCab() const
{
    return cab;
}

void listaVacunaLoteClass::setCab(vacunaLoteClass *value)
{
    cab = value;
}

int listaVacunaLoteClass::getMax() const
{
    return max;
}

void listaVacunaLoteClass::setMax(int value)
{
    max = value;
}

int listaVacunaLoteClass::getCant() const
{
    return cant;
}

void listaVacunaLoteClass::setCant(int value)
{
    cant = value;
}
listaVacunaLoteClass::listaVacunaLoteClass()
{

}

listaVacunaLoteClass::~listaVacunaLoteClass()
{

}

