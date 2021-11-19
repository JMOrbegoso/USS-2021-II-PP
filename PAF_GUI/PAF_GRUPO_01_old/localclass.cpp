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

listaDoctoresClass *localClass::getDoctores() const
{
    return doctores;
}

void localClass::setDoctores(listaDoctoresClass *value)
{
    doctores = value;
}

listaPacienteClass *localClass::getPacientes() const
{
    return pacientes;
}

void localClass::setPacientes(listaPacienteClass *value)
{
    pacientes = value;
}

listaEnfermerasClass *localClass::getEnfermeras() const
{
    return enfermeras;
}

void localClass::setEnfermeras(listaEnfermerasClass *value)
{
    enfermeras = value;
}
listaAtendidosClass *localClass::getAtendidos() const
{
    return atendidos;
}

void localClass::setAtendidos(listaAtendidosClass *value)
{
    atendidos = value;
}

localClass::localClass()
{
    
}

localClass::~localClass()
{
    
}

