#ifndef NODOTRABAJADORCLASS_H
#define NODOTRABAJADORCLASS_H

#include "trabajadorclass.h"

class nodoTrabajadorClass
{
private:
    trabajadorClass *info;
    nodoTrabajadorClass *sgte;
public:
    nodoTrabajadorClass();
    trabajadorClass *getInfo() const;
    void setInfo(trabajadorClass *value);
    nodoTrabajadorClass *getSgte() const;
    void setSgte(nodoTrabajadorClass *value);
};

#endif // NODOTRABAJADORCLASS_H
