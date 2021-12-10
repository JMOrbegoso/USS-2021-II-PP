#ifndef NODOMARCAS_H
#define NODOMARCAS_H
#include <marca.h>

class nodoMarcas{
private:
    marca *info;
    nodoMarcas *sgte;
    nodoMarcas *ant;
public:
    nodoMarcas();
    marca *getInfo() const;
    void setInfo(marca *value);
    nodoMarcas *getSgte() const;
    void setSgte(nodoMarcas *value);
    nodoMarcas *getAnt() const;
    void setAnt(nodoMarcas *value);
};

#endif // NODOMARCAS_H
