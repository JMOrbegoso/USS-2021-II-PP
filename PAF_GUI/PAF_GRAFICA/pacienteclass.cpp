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
    this->codigo = "PACI-" + to_string(pacienteClass::contador);
    pacienteClass::contador++;
}

pacienteClass::~pacienteClass()
{

}

