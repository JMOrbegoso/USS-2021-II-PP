#include "zonaclass.h"

listaButacasClass *zonaClass::getLButacas() const
{
    return lButacas;
}

void zonaClass::setLButacas(listaButacasClass *value)
{
    lButacas = value;
}

string zonaClass::getFechaF() const
{
    return fechaF;
}

void zonaClass::setFechaF(const string &value)
{
    fechaF = value;
}

double zonaClass::getPrecio() const
{
    return precio;
}

void zonaClass::setPrecio(double value)
{
    precio = value;
}

zonaClass::zonaClass()
{
    
}
