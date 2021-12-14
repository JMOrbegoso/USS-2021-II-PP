#ifndef LISTAZONASCLASS_H
#define LISTAZONASCLASS_H

#include "zonaclass.h"
#define Max 3

class listaZonasClass
{
private:
    zonaClass *cab;
    int cant;
    int max;
public:
    listaZonasClass();
    zonaClass *getCab() const;
    void setCab(zonaClass *value);
    int getCant() const;
    void setCant(int value);
    int getMax() const;
    void setMax(int value);

    void crecer();
    void insertar(zonaClass *zona);
};

#endif // LISTAZONASCLASS_H
