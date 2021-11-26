#include "clsnodocliente.h"


clsCliente *clsNodoCliente::getInfo() const
{
    return info;
}

void clsNodoCliente::setInfo(clsCliente *value)
{
    info = value;
}

clsNodoCliente *clsNodoCliente::getSgte() const
{
    return sgte;
}

void clsNodoCliente::setSgte(clsNodoCliente *value)
{
    sgte = value;
}
clsNodoCliente::clsNodoCliente()
{
    
}

clsNodoCliente::~clsNodoCliente()
{
    
}

