#include "nodoc.h"

categoria *nodoC::getCatego() const
{
    return catego;
}

void nodoC::setCatego(categoria *value)
{
    catego = value;
}

nodoC *nodoC::getSgte() const
{
    return sgte;
}

void nodoC::setSgte(nodoC *value)
{
    sgte = value;
}

nodoC *nodoC::getAnt() const
{
    return ant;
}

void nodoC::setAnt(nodoC *value)
{
    ant = value;
}

nodoC::nodoC()
{
    this->ant = NULL;
    this->sgte = NULL;
}

nodoC::~nodoC()
{

}
