#include "listapacientesclass.h"


nodoPacienteClass *listaPacientesClass::getCab() const
{
    return cab;
}

void listaPacientesClass::setCab(nodoPacienteClass *value)
{
    cab = value;
}

int listaPacientesClass::getCant() const
{
    return cant;
}

void listaPacientesClass::setCant(int value)
{
    cant = value;
}
listaPacientesClass::listaPacientesClass()
{
    cab = NULL;
    cant = 0;
}

listaPacientesClass::~listaPacientesClass()
{

}

