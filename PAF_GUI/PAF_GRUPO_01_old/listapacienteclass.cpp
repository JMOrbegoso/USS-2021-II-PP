#include "listapacienteclass.h"


nodoPacienteClass *listaPacienteClass::getCab() const
{
    return cab;
}

void listaPacienteClass::setCab(nodoPacienteClass *value)
{
    cab = value;
}

int listaPacienteClass::getCant() const
{
    return cant;
}

void listaPacienteClass::setCant(int value)
{
    cant = value;
}
listaPacienteClass::listaPacienteClass()
{

}

listaPacienteClass::~listaPacienteClass()
{

}

