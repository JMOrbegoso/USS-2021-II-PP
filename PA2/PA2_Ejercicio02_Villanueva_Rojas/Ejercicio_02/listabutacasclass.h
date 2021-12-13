#ifndef LISTABUTACASCLASS_H
#define LISTABUTACASCLASS_H

#include "nodobutacasclass.h"

class listaButacasClass
{
private:
    nodoButacasClass *cab;
    int cant;
public:
    listaButacasClass();
    nodoButacasClass *getCab() const;
    void setCab(nodoButacasClass *value);
    int getCant() const;
    void setCant(int value);

    void insertar(butacaClass *butaca);
};

#endif // LISTABUTACASCLASS_H
