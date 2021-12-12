#ifndef ZONACLASS_H
#define ZONACLASS_H

#include "listabutacasclass.h"

class zonaClass
{
private:
    listaButacasClass *lButacas;
    string fechaF; //fecha de la funcion
    double precio;
public:
    zonaClass();
    listaButacasClass *getLButacas() const;
    void setLButacas(listaButacasClass *value);
    string getFechaF() const;
    void setFechaF(const string &value);
    double getPrecio() const;
    void setPrecio(double value);
};

#endif // ZONACLASS_H
