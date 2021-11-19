#include "nodoatendidoclass.h"


atendidoClass *nodoAtendidoClass::getAtendido() const
{
    return atendido;
}

void nodoAtendidoClass::setAtendido(atendidoClass *value)
{
    atendido = value;
}

nodoAtendidoClass *nodoAtendidoClass::getSgte() const
{
    return sgte;
}

void nodoAtendidoClass::setSgte(nodoAtendidoClass *value)
{
    sgte = value;
}

nodoAtendidoClass *nodoAtendidoClass::getAnt() const
{
    return ant;
}

void nodoAtendidoClass::setAnt(nodoAtendidoClass *value)
{
    ant = value;
}
nodoAtendidoClass::nodoAtendidoClass()
{

}

nodoAtendidoClass::~nodoAtendidoClass()
{

}

