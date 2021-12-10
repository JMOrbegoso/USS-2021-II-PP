#ifndef LISTACOMPRAS_H
#define LISTACOMPRAS_H
#include <nodocompras.h>

class listaCompras{
private:
    nodoCompras *cab;
    int contador;
public:
    listaCompras();
    nodoCompras *getCab() const;
    void setCab(nodoCompras *value);
    int getContador() const;
    void setContador(int value);
    void insertarCompra(compra *com);
    void mostrarV();
};

#endif // LISTACOMPRAS_H
