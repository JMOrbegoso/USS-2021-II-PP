#include "nodolicores.h"

licor *nodoLicores::getInfo() const
{
    return info;
}

void nodoLicores::setInfo(licor *value)
{
    info = value;
}

nodoLicores *nodoLicores::getSgte() const
{
    return sgte;
}

void nodoLicores::setSgte(nodoLicores *value)
{
    sgte = value;
}

nodoLicores *nodoLicores::getAnt() const
{
    return ant;
}

void nodoLicores::setAnt(nodoLicores *value)
{
    ant = value;
}

nodoLicores::nodoLicores(){
    this->sgte = NULL;
    this->ant = NULL;
}
