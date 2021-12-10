#ifndef NODOC_H
#define NODOC_H

#include <categoria.h>

class nodoC
{
private:
    categoria *catego;
    nodoC *sgte;
    nodoC *ant;
public:
    nodoC();
    ~nodoC();
    categoria *getCatego() const;
    void setCatego(categoria *value);
    nodoC *getSgte() const;
    void setSgte(nodoC *value);
    nodoC *getAnt() const;
    void setAnt(nodoC *value);
};

#endif // NODOC_H
