#include "clscliente.h"
#ifndef CLSNODOCLIENTE_H
#define CLSNODOCLIENTE_H


class clsNodoCliente
{
private:
    clsCliente *info;
    clsNodoCliente *sgte;
public:
    clsNodoCliente();
    ~clsNodoCliente();
    clsCliente *getInfo() const;
    void setInfo(clsCliente *value);
    clsNodoCliente *getSgte() const;
    void setSgte(clsNodoCliente *value);
};

#endif // CLSNODOCLIENTE_H
