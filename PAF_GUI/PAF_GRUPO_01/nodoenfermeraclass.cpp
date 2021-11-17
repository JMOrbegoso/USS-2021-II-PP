#include "nodoenfermeraclass.h"


enfermeraClass *nodoEnfermeraClass::getEnfermera() const
{
    return enfermera;
}

void nodoEnfermeraClass::setEnfermera(enfermeraClass *value)
{
    enfermera = value;
}

nodoEnfermeraClass *nodoEnfermeraClass::getSgte() const
{
    return sgte;
}

void nodoEnfermeraClass::setSgte(nodoEnfermeraClass *value)
{
    sgte = value;
}

nodoEnfermeraClass *nodoEnfermeraClass::getAnt() const
{
    return ant;
}

void nodoEnfermeraClass::setAnt(nodoEnfermeraClass *value)
{
    ant = value;
}
nodoEnfermeraClass::nodoEnfermeraClass()
{

}

nodoEnfermeraClass::~nodoEnfermeraClass()
{

}

