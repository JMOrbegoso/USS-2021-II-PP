#include "clscliente.h"


string clsCliente::getNombres() const
{
    return nombres;
}

void clsCliente::setNombres(const string &value)
{
    nombres = value;
}

string clsCliente::getApellidos() const
{
    return apellidos;
}

void clsCliente::setApellidos(const string &value)
{
    apellidos = value;
}

string clsCliente::getFechaNacimiento() const
{
    return fechaNacimiento;
}

void clsCliente::setFechaNacimiento(const string &value)
{
    fechaNacimiento = value;
}

double clsCliente::getSueldo() const
{
    return sueldo;
}

void clsCliente::setSueldo(double value)
{
    sueldo = value;
}

string clsCliente::getDni() const
{
    return dni;
}

void clsCliente::setDni(const string &value)
{
    dni = value;
}

bool clsCliente::getGenero() const
{
    return genero;
}

void clsCliente::setGenero(bool value)
{
    genero = value;
}

string clsCliente::getDireccion() const
{
    return direccion;
}

void clsCliente::setDireccion(const string &value)
{
    direccion = value;
}

int clsCliente::getCodigo()
{
    return codigo;
}

void clsCliente::setCodigo(int value)
{
    codigo = value;
}
clsCliente::clsCliente()
{
    clsCliente::codigo++;
}

clsCliente::~clsCliente()
{
    
}

