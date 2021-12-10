#include "nodocompras.h"

compra *nodoCompras::getInfo() const
{
    return info;
}

void nodoCompras::setInfo(compra *value)
{
    info = value;
}

nodoCompras *nodoCompras::getSgte() const
{
    return sgte;
}

void nodoCompras::setSgte(nodoCompras *value)
{
    sgte = value;
}

nodoCompras *nodoCompras::getAnt() const
{
    return ant;
}

void nodoCompras::setAnt(nodoCompras *value)
{
    ant = value;
}

nodoCompras::nodoCompras(){
    this->sgte = NULL;
    this->ant = NULL;
}
