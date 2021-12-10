#ifndef LISTACATEGORIAS_H
#define LISTACATEGORIAS_H

#include <nodoc.h>

class listaCategorias
{
private:
    nodoC *cab;
    unsigned short nCategorias;
public:
    listaCategorias();
    ~listaCategorias();
    nodoC *getCab() const;
    void setCab(nodoC *value);
    unsigned short getNCategorias() const;
    void setNCategorias(unsigned short value);
    void insertarCategoria(categoria *cat);
    void registrarCat();
    nodoC *elegirCategoria(nodoC *cabezaC);
    void registrarPorductoCategoria();
    nodoC *elegirCategoria();
};

#endif // LISTACATEGORIAS_H
