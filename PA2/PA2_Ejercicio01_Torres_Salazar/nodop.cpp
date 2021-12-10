#include "nodop.h"

producto *nodoP::getProduct() const
{
    return product;
}

void nodoP::setProduct(producto *value)
{
    product = value;
}

nodoP *nodoP::getSgte() const
{
    return sgte;
}

void nodoP::setSgte(nodoP *value)
{
    sgte = value;
}

nodoP *nodoP::getAnt() const
{
    return ant;
}

void nodoP::setAnt(nodoP *value)
{
    ant = value;
}

nodoP::nodoP()
{
    this->ant = NULL;
    this->sgte = NULL;
}

nodoP::~nodoP()
{

}
