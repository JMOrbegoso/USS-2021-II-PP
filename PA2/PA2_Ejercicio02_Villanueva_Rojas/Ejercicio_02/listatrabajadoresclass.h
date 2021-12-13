#ifndef LISTATRABAJADORESCLASS_H
#define LISTATRABAJADORESCLASS_H

#include "nodotrabajadorclass.h"

class listaTrabajadoresClass
{
private:
    nodoTrabajadorClass *cab;
    int cant;
public:
    listaTrabajadoresClass();
    nodoTrabajadorClass *getCab() const;
    void setCab(nodoTrabajadorClass *value);
    int getCant() const;
    void setCant(int value);

    void insertar(trabajadorClass *trab);
};

#endif // LISTATRABAJADORESCLASS_H
