#include "localclass.h"


string localClass::getDireccion() const
{
    return direccion;
}

void localClass::setDireccion(const string &value)
{
    direccion = value;
}

bool localClass::getEstado() const
{
    return estado;
}

void localClass::setEstado(bool value)
{
    estado = value;
}

listaPacienteClass *localClass::getPacientes() const
{
    return pacientes;
}

void localClass::setPacientes(listaPacienteClass *value)
{
    pacientes = value;
}

listaAtendidosClass *localClass::getAtendidos() const
{
    return atendidos;
}

void localClass::setAtendidos(listaAtendidosClass *value)
{
    atendidos = value;
}


listaPersonalClass *localClass::getPersonales() const
{
    return personales;
}

void localClass::setPersonales(listaPersonalClass *value)
{
    personales = value;
}
localClass::localClass()
{
    
}

localClass::~localClass()
{
    
}

