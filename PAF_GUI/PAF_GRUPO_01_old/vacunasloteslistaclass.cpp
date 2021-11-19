#include "vacunasloteslistaclass.h"


vacunaLoteClass *vacunasLotesListaClass::getCab() const
{
    return cab;
}

void vacunasLotesListaClass::setCab(vacunaLoteClass *value)
{
    cab = value;
}

int vacunasLotesListaClass::getMax() const
{
    return max;
}

void vacunasLotesListaClass::setMax(int value)
{
    max = value;
}

int vacunasLotesListaClass::getCant() const
{
    return cant;
}

void vacunasLotesListaClass::setCant(int value)
{
    cant = value;
}
vacunasLotesListaClass::vacunasLotesListaClass()
{

}

vacunasLotesListaClass::~vacunasLotesListaClass()
{

}

