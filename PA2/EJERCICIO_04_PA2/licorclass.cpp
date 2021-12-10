#include "licorclass.h"

string licorClass::getNombre() const
{
    return nombre;
}

void licorClass::setNombre(const string &value)
{
    nombre = value;
}

string licorClass::getDescripcion() const
{
    return descripcion;
}

void licorClass::setDescripcion(const string &value)
{
    descripcion = value;
}

licorClass::licorClass(){
}

licorClass::licorClass(string nomb, string descrip){
    this->nombre = nomb;
    this->descripcion = descrip;
}
