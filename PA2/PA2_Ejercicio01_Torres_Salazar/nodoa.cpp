#include "nodoa.h"

adquisicion *nodoA::getAdquirido() const
{
    return adquirido;
}

void nodoA::setAdquirido(adquisicion *value)
{
    adquirido = value;
}

nodoA *nodoA::getSgte() const
{
    return sgte;
}

void nodoA::setSgte(nodoA *value)
{
    sgte = value;
}

nodoA *nodoA::getAnt() const
{
    return ant;
}

void nodoA::setAnt(nodoA *value)
{
    ant = value;
}

nodoA::nodoA()
{
    this->ant = NULL;
    this->sgte = NULL;
}

nodoA::~nodoA()
{

}
