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
};

#endif // LISTATRABAJADORESCLASS_H
