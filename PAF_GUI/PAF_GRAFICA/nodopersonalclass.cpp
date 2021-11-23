#include "nodopersonalclass.h"


personalClass *nodoPersonalClass::getInfo() const
{
    return info;
}

void nodoPersonalClass::setInfo(personalClass *value)
{
    info = value;
}

nodoPersonalClass *nodoPersonalClass::getSgte() const
{
    return sgte;
}

void nodoPersonalClass::setSgte(nodoPersonalClass *value)
{
    sgte = value;
}

nodoPersonalClass *nodoPersonalClass::getAnt() const
{
    return ant;
}

void nodoPersonalClass::setAnt(nodoPersonalClass *value)
{
    ant = value;
}
nodoPersonalClass::nodoPersonalClass()
{

}

nodoPersonalClass::~nodoPersonalClass()
{

}

