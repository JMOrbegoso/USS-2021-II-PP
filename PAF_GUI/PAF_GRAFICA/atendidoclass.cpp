#include "atendidoclass.h"


personalClass *atendidoClass::getEnfermera() const
{
    return enfermera;
}

void atendidoClass::setEnfermera(personalClass *value)
{
    enfermera = value;
}

loteVacunaLocalClass *atendidoClass::getVacuna() const
{
    return vacuna;
}

void atendidoClass::setVacuna(loteVacunaLocalClass *value)
{
    vacuna = value;
}
string atendidoClass::getFecha() const
{
    return fecha;
}

void atendidoClass::setFecha(const string &value)
{
    fecha = value;
}

atendidoClass::atendidoClass()
{

}

atendidoClass::~atendidoClass()
{

}

