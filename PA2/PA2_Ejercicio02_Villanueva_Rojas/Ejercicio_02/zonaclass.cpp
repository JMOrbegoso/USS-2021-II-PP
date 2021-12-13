#include "zonaclass.h"

int zonaClass::contador = 1;

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

string zonaClass::getCodigo() const
{
    return codigo;
}

zonaClass::zonaClass()
{
    precio = 0.0;
    lButacas = NULL;
}

zonaClass::zonaClass(string nombre, string fechaF, double precio, listaButacasClass *lButacas)
{
    codigo = "ZON-" + to_string(zonaClass::contador);
    zonaClass::contador++;
    this->nombre = nombre;
    this->fechaF = fechaF;
    this->precio = precio;
    this->lButacas = lButacas;
}
