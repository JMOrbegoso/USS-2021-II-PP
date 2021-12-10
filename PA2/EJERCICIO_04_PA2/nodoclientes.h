#ifndef NODOCLIENTES_H
#define NODOCLIENTES_H
#include <cliente.h>

class nodoClientes{
private:
    cliente *info;
    nodoClientes *sgte;
    nodoClientes *ant;
public:
    nodoClientes();
    cliente *getInfo() const;
    void setInfo(cliente *value);
    nodoClientes *getSgte() const;
    void setSgte(nodoClientes *value);
    nodoClientes *getAnt() const;
    void setAnt(nodoClientes *value);
};

#endif // NODOCLIENTES_H
