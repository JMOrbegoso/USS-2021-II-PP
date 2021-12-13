#ifndef ZONACLASS_H
#define ZONACLASS_H

#include "listabutacasclass.h"

class zonaClass
{
private:
    listaButacasClass *lButacas;
    string nombre;
    string fechaF; //fecha de la funcion
    double precio;
public:
    zonaClass();
    zonaClass(string nombre, string fechaF, double precio);
    listaButacasClass *getLButacas() const;
    void setLButacas(listaButacasClass *value);
    string getFechaF() const;
    void setFechaF(const string &value);
    double getPrecio() const;
    void setPrecio(double value);
    string getNombre() const;
    void setNombre(const string &value);
};

#endif // ZONACLASS_H
