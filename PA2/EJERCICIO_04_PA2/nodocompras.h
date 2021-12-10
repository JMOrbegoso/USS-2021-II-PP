#ifndef NODOCOMPRAS_H
#define NODOCOMPRAS_H
#include <compra.h>

class nodoCompras{
private:
    compra *info;
    nodoCompras *sgte;
    nodoCompras *ant;
public:
    nodoCompras();
    compra *getInfo() const;
    void setInfo(compra *value);
    nodoCompras *getSgte() const;
    void setSgte(nodoCompras *value);
    nodoCompras *getAnt() const;
    void setAnt(nodoCompras *value);
};

#endif // NODOCOMPRAS_H
