#ifndef NODOP_H
#define NODOP_H

#include <producto.h>

class nodoP
{
private:
    producto *product;
    nodoP *sgte;
    nodoP *ant;
public:
    nodoP();
    ~nodoP();
    producto *getProduct() const;
    void setProduct(producto *value);
    nodoP *getSgte() const;
    void setSgte(nodoP *value);
    nodoP *getAnt() const;
    void setAnt(nodoP *value);
};

#endif // NODOP_H
