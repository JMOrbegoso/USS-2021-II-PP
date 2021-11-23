#include "listalotesvacunageneralclass.h"


loteVacunaClass *listaLotesVacunaGeneralClass::getLote() const
{
    return lote;
}

void listaLotesVacunaGeneralClass::setLote(loteVacunaClass *value)
{
    lote = value;
}

int listaLotesVacunaGeneralClass::getCant() const
{
    return cant;
}

void listaLotesVacunaGeneralClass::setCant(int value)
{
    cant = value;
}

int listaLotesVacunaGeneralClass::getMax() const
{
    return max;
}

void listaLotesVacunaGeneralClass::setMax(int value)
{
    max = value;
}
listaLotesVacunaGeneralClass::listaLotesVacunaGeneralClass()
{

}

listaLotesVacunaGeneralClass::~listaLotesVacunaGeneralClass()
{

}

