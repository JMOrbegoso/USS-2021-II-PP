#include "nodomarcas.h"

marca *nodoMarcas::getInfo() const
{
    return info;
}

void nodoMarcas::setInfo(marca *value)
{
    info = value;
}

nodoMarcas *nodoMarcas::getSgte() const
{
    return sgte;
}

void nodoMarcas::setSgte(nodoMarcas *value)
{
    sgte = value;
}

nodoMarcas *nodoMarcas::getAnt() const
{
    return ant;
}

void nodoMarcas::setAnt(nodoMarcas *value)
{
    ant = value;
}

nodoMarcas::nodoMarcas(){
    this->sgte = NULL;
    this->ant = NULL;
}
