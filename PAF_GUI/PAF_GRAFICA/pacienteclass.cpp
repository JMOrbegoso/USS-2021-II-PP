#include "pacienteclass.h"

int pacienteClass::contador = 1;

string pacienteClass::getEnfermedad() const
{
    return enfermedad;
}

void pacienteClass::setEnfermedad(const string &value)
{
    enfermedad = value;
}

string pacienteClass::getCodigo()
{
    return this->codigo;
}

atencionClass *pacienteClass::getAtencion() const
{
    return atencion;
}

void pacienteClass::setAtencion(atencionClass *value)
{
    atencion = value;
}

pacienteClass::pacienteClass()
{
}

pacienteClass::pacienteClass(string dni, string nombre, string apellido, int edad,string telefono, string direccion, string enfermed) : personaClass(nombre, apellido, dni, telefono, direccion, edad)
{
    this->codigo = "PACI-" + to_string(pacienteClass::contador);
    pacienteClass::contador++;

    this->enfermedad = enfermed;
    this->atencion = NULL;
}

pacienteClass::pacienteClass(string dni, string nombre, string apellido, int edad,string telefono, string direccion) : personaClass(nombre, apellido, dni, telefono, direccion, edad)
{
    this->codigo = "PACI-" + to_string(pacienteClass::contador);
    pacienteClass::contador++;

    this->enfermedad = "";
    this->atencion = NULL;
}

pacienteClass::~pacienteClass()
{

}

