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
loteVacunaClass *listaLotesVacunaClass::getCab() const
{
    return cab;
}

void listaLotesVacunaClass::setCab(loteVacunaClass *value)
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

