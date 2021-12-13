#ifndef LISTACLIENTECLASS_H
#define LISTACLIENTECLASS_H

#include "nodoclienteclass.h"

class listaClienteClass
{
private:
    nodoClienteClass *cab;
    int cant;
public:
    listaClienteClass();
    nodoClienteClass *getCab() const;
    void setCab(nodoClienteClass *value);
    int getCant() const;
    void setCant(int value);

    void insertar(clienteClass *cli);
};

#endif // LISTACLIENTECLASS_H
