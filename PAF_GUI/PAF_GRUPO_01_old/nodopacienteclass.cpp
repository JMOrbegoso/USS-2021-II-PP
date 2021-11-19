#include "nodopacienteclass.h"


pacienteClass *nodoPacienteClass::getPaciente() const
{
    return paciente;
}

void nodoPacienteClass::setPaciente(pacienteClass *value)
{
    paciente = value;
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

