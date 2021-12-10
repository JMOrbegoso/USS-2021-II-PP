#ifndef LISTAPRODUCTOS_H
#define LISTAPRODUCTOS_H

#include <nodop.h>

class listaProductos
{
private:
    nodoP *cab;
    unsigned short nProductos;
public:
    listaProductos();
    ~listaProductos();
    nodoP *getCab() const;
    void setCab(nodoP *value);
    unsigned short getNProductos() const;
    void setNProductos(unsigned short value);
    void insertarProducto(producto *pro);
    nodoP *elegirProducto(nodoP *cabezaPro);
};

#endif // LISTAPRODUCTOS_H
