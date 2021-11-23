#include "nodopacienteclass.h"


pacienteClass *nodoPacienteClass::getInfo() const
{
    return info;
}

void nodoPacienteClass::setInfo(pacienteClass *value)
{
    info = value;
}

nodoPacienteClass *nodoPacienteClass::getSgte() const
{
    return sgte;
}

void nodoPacienteClass::setSgte(nodoPacienteClass *value)
{
    sgte = value;
}

nodoPacienteClass *nodoPacienteClass::getAnt() const
{
    return ant;
}

void nodoPacienteClass::setAnt(nodoPacienteClass *value)
{
    ant = value;
}
nodoPacienteClass::nodoPacienteClass()
{

}

nodoPacienteClass::~nodoPacienteClass()
{

}

