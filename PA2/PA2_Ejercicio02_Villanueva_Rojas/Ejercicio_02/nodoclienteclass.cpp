#include "nodoclienteclass.h"

clienteClass *nodoClienteClass::getInfo() const
{
    return info;
}

void nodoClienteClass::setInfo(clienteClass *value)
{
    info = value;
}

nodoClienteClass *nodoClienteClass::getSgte() const
{
    return sgte;
}

void nodoClienteClass::setSgte(nodoClienteClass *value)
{
    sgte = value;
}

nodoClienteClass::nodoClienteClass()
{
    
}
