#include "personaclass.h"


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

string personaClass::getDni() const
{
    return dni;
}

void personaClass::setDni(const string &value)
{
    dni = value;
}

string personaClass::getTelefono() const
{
    return telefono;
}

void personaClass::setTelefono(const string &value)
{
    telefono = value;
}

string personaClass::getDireccion() const
{
    return direccion;
}

void personaClass::setDireccion(const string &value)
{
    direccion = value;
}

int personaClass::getEdad() const
{
    return edad;
}

void personaClass::setEdad(int value)
{
    edad = value;
}
string personaClass::getCodigo() const
{
    return codigo;
}

void personaClass::setCodigo(const string &value)
{
    codigo = value;
}

personaClass::personaClass()
{
    
}

personaClass::~personaClass()
{
    
}

