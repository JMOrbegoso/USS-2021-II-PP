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
string pacienteClass::getFecha() const
{
    return fecha;
}

void pacienteClass::setFecha(const string &value)
{
    fecha = value;
}

string pacienteClass::getCualEnfermedad() const
{
    return cualEnfermedad;
}

void pacienteClass::setCualEnfermedad(const string &value)
{
    cualEnfermedad = value;
}

string pacienteClass::getCodigo()
{
    return this->codigo;
}

pacienteClass::pacienteClass()
{
}

pacienteClass::pacienteClass(string dni, string nombre, string apellido, int edad,string telefono, string direccion, string enfermed, string cual) : personaClass(nombre, apellido, dni, telefono, direccion, edad)
{
    this->codigo = "PACI-" + to_string(pacienteClass::contador);
    pacienteClass::contador++;
    this->enfermedad = enfermed;
    this->cualEnfermedad = cual;
}

pacienteClass::~pacienteClass()
{

}

