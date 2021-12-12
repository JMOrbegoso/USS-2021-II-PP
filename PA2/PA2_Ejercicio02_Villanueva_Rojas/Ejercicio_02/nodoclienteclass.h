#ifndef NODOCLIENTECLASS_H
#define NODOCLIENTECLASS_H

#include "clienteclass.h"

class nodoClienteClass
{
private:
    clienteClass *info;
    nodoClienteClass *sgte;
public:
    nodoClienteClass();
    clienteClass *getInfo() const;
    void setInfo(clienteClass *value);
    nodoClienteClass *getSgte() const;
    void setSgte(nodoClienteClass *value);
};

#endif // NODOCLIENTECLASS_H
