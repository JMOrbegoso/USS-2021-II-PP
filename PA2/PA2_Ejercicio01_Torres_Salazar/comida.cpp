#include "comida.h"

string comida::getNombre() const
{
    return nombre;
}

void comida::setNombre(const string &value)
{
    nombre = value;
}

string comida::getDescripcion() const
{
    return descripcion;
}

void comida::setDescripcion(const string &value)
{
    descripcion = value;
}

comida::comida()
{

}

comida::comida(string nombre, string descripcion)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
}

comida::~comida()
{

}

