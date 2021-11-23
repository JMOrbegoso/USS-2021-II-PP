#include "listalotesvacunaclass.h"


loteVacunaLocalClass *listaLotesVacunaClass::getLote() const
{
    return lote;
}

void listaLotesVacunaClass::setLote(loteVacunaLocalClass *value)
{
    lote = value;
}

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
listaLotesVacunaClass::listaLotesVacunaClass()
{

}

listaLotesVacunaClass::~listaLotesVacunaClass()
{

}

