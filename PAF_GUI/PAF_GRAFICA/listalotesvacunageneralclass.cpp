#include "listalotesvacunageneralclass.h"


loteGeneralClass *listaLotesVacunaGeneralClass::getLote() const
{
    return lote;
}

void listaLotesVacunaGeneralClass::setLote(loteGeneralClass *value)
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

