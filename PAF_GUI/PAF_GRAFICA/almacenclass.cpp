#include "almacenclass.h"

listaLotesVacunaClass *almacenClass::getLotes() const
{
    return lotes;
}

void almacenClass::setLotes(listaLotesVacunaClass *value)
{
    lotes = value;
}

almacenClass::almacenClass()
{
    this->lotes = new listaLotesVacunaClass();
}

almacenClass::~almacenClass()
{

}

