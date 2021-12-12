#include "nodobutacasclass.h"

butacaClass *nodoButacasClass::getInfo() const
{
    return info;
}

void nodoButacasClass::setInfo(butacaClass *value)
{
    info = value;
}

nodoButacasClass *nodoButacasClass::getSgte() const
{
    return sgte;
}

void nodoButacasClass::setSgte(nodoButacasClass *value)
{
    sgte = value;
}

nodoButacasClass::nodoButacasClass()
{
    this->info = NULL;
    this->sgte = NULL;
}
