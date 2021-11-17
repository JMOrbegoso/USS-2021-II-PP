#include "personaclass.h"


string personaClass::getDni() const
{
    return dni;
}

void personaClass::setDni(const string &value)
{
    dni = value;
}

string personaClass::getNombre() const
{
    return nombre;
}

void personaClass::setNombre(const string &value)
{
    nombre = value;
}

string personaClass::getApellido() const
{
    return apellido;
}

void personaClass::setApellido(const string &value)
{
    apellido = value;
}

string personaClass::getTelefono() const
{
    return telefono;
}

void personaClass::setTelefono(const string &value)
{
    telefono = value;
}

unsigned short personaClass::getEdad() const
{
    return edad;
}

void personaClass::setEdad(unsigned short value)
{
    edad = value;
}

string personaClass::getDireccion() const
{
    return direccion;
}

void personaClass::setDireccion(const string &value)
{
    direccion = value;
}
personaClass::personaClass()
{

}

personaClass::~personaClass()
{

}

