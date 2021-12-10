#include "nodocliad.h"

clienteAdqui *nodoCliAd::getCliAdqui() const
{
    return cliAdqui;
}

void nodoCliAd::setCliAdqui(clienteAdqui *value)
{
    cliAdqui = value;
}

nodoCliAd *nodoCliAd::getSgte() const
{
    return sgte;
}

void nodoCliAd::setSgte(nodoCliAd *value)
{
    sgte = value;
}

nodoCliAd *nodoCliAd::getAnt() const
{
    return ant;
}

void nodoCliAd::setAnt(nodoCliAd *value)
{
    ant = value;
}

nodoCliAd::nodoCliAd()
{
    this->ant = NULL;
    this->sgte = NULL;
}

nodoCliAd::~nodoCliAd()
{

}
