#ifndef LISTALICORESCOMPRADOS_H
#define LISTALICORESCOMPRADOS_H
#include <nodoproductocomprado.h>

class listaLicoresComprados{
private:
    nodoProductoComprado *cab;
    int contador;
public:
    listaLicoresComprados();
    nodoProductoComprado *getCab() const;
    void setCab(nodoProductoComprado *value);
    int getContador() const;
    void setContador(int value);
    void insertarLicor(productoComprado *produ);
};

#endif // LISTALICORESCOMPRADOS_H
