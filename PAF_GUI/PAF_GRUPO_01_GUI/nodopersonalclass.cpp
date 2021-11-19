#include "nodopersonalclass.h"


personalClass *nodoPersonalClass::getPers() const
{
    return pers;
}

void nodoPersonalClass::setPers(personalClass *value)
{
    pers = value;
}

nodoPersonalClass *nodoPersonalClass::getSgte() const
{
    return sgte;
}

void nodoPersonalClass::setSgte(nodoPersonalClass *value)
{
    sgte = value;
}

nodoPersonalClass *nodoPersonalClass::getAnte() const
{
    return ante;
}

void nodoPersonalClass::setAnte(nodoPersonalClass *value)
{
    ante = value;
}
nodoPersonalClass::nodoPersonalClass()
{

}

nodoPersonalClass::~nodoPersonalClass()
{

}

