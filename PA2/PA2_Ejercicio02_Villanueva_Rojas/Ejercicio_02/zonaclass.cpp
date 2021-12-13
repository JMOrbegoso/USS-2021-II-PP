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

string zonaClass::getNombre() const
{
    return nombre;
}

void zonaClass::setNombre(const string &value)
{
    nombre = value;
}

zonaClass::zonaClass()
{
    precio = 0.0;
}

zonaClass::zonaClass(string nombre, string fechaF, double precio)
{
    this->nombre = nombre;
    this->fechaF = fechaF;
    this->precio = precio;
    this->lButacas = new listaButacasClass();
}
