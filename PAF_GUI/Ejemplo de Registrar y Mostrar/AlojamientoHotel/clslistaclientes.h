#include "clsnodocliente.h"
#ifndef CLSLISTACLIENTES_H
#define CLSLISTACLIENTES_H


class clsListaClientes
{
private:
    clsNodoCliente *cab;
    unsigned short nClie;
public:
    clsListaClientes();
    ~clsListaClientes();
    clsNodoCliente *getCab() const;
    void setCab(clsNodoCliente *value);
    unsigned short getNClie() const;
    void setNClie(unsigned short value);
    void insertarCliente( clsCliente *clie );
};

#endif // CLSLISTACLIENTES_H
