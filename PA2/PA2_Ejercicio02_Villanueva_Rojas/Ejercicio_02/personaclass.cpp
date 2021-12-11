#include "personaclass.h"

string personaClass::getNombre() const
{
    return nombre;
}

void personaClass::setNombre(const string &value)
{
    nombre = value;
}

string personaClass::getApelli() const
{
    return apelli;
}

void personaClass::setApelli(const string &value)
{
    apelli = value;
}

string personaClass::getDniPer() const
{
    return dniPer;
}

void personaClass::setDniPer(const string &value)
{
    dniPer = value;
}

int personaClass::getEdaPer() const
{
    return edaPer;
}

void personaClass::setEdaPer(int value)
{
    edaPer = value;
}

bool personaClass::getGenero() const
{
    return genero;
}

void personaClass::setGenero(bool value)
{
    genero = value;
}

personaClass::personaClass()
{

}
personaClass::personaClass(string nombre, string apelli, string dniPer, int edaPer, bool genero)
{
    this->nombre = nombre;
    this->apelli = apelli;
    this->dniPer = dniPer;
    this->edaPer = edaPer;
    this->genero = genero;
}
