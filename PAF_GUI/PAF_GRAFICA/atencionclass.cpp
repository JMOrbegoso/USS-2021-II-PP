#include "atencionclass.h"


personalClass *atencionClass::getEnfermera() const
{
    return enfermera;
}

void atencionClass::setEnfermera(personalClass *value)
{
    enfermera = value;
}

loteVacunaLocalClass *atencionClass::getVacuna() const
{
    return vacuna;
}

void atencionClass::setVacuna(loteVacunaLocalClass *value)
{
    vacuna = value;
}
string atencionClass::getFecha() const
{
    return fecha;
}

void atencionClass::setFecha(const string &value)
{
    fecha = value;
}

atencionClass::atencionClass()
{

}

atencionClass::~atencionClass()
{

}

