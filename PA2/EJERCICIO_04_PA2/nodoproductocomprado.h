#ifndef NODOPRODUCTOCOMPRADO_H
#define NODOPRODUCTOCOMPRADO_H
#include <productocomprado.h>

class nodoProductoComprado{
private:
    productoComprado *info;
    nodoProductoComprado *sgte;
    nodoProductoComprado *ant;
public:
    nodoProductoComprado();
    productoComprado *getInfo() const;
    void setInfo(productoComprado *value);
    nodoProductoComprado *getSgte() const;
    void setSgte(nodoProductoComprado *value);
    nodoProductoComprado *getAnt() const;
    void setAnt(nodoProductoComprado *value);
};

#endif // NODOPRODUCTOCOMPRADO_H
