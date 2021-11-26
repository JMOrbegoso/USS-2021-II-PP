#include "listalotesvacunaclass.h"

int listaLotesVacunaClass::getCant() const
{
    return cant;
}

void listaLotesVacunaClass::setCant(int value)
{
    cant = value;
}

int listaLotesVacunaClass::getMax() const
{
    return max;
}

void listaLotesVacunaClass::setMax(int value)
{
    max = value;
}
loteVacunaLocalClass *listaLotesVacunaClass::getCab() const
{
    return cab;
}

void listaLotesVacunaClass::setCab(loteVacunaLocalClass *value)
{
    cab = value;
}

listaLotesVacunaClass::listaLotesVacunaClass()
{
    cab = NULL;
    cant = 0;
    max = 0;
}

listaLotesVacunaClass::~listaLotesVacunaClass()
{

}

