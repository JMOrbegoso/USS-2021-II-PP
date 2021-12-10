#include "nodoclientes.h"

cliente *nodoClientes::getInfo() const
{
    return info;
}

void nodoClientes::setInfo(cliente *value)
{
    info = value;
}

nodoClientes *nodoClientes::getSgte() const
{
    return sgte;
}

void nodoClientes::setSgte(nodoClientes *value)
{
    sgte = value;
}

nodoClientes *nodoClientes::getAnt() const
{
    return ant;
}

void nodoClientes::setAnt(nodoClientes *value)
{
    ant = value;
}

nodoClientes::nodoClientes(){
    this->sgte = NULL;
    this->ant = NULL;
}
