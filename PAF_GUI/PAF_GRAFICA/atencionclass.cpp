#include "atencionclass.h"


personalClass *atencionClass::getEnfermera() const
{
    return enfermera;
}

void atencionClass::setEnfermera(personalClass *value)
{
    enfermera = value;
}

loteVacunaClass *atencionClass::getVacuna() const
{
    return vacuna;
}

void atencionClass::setVacuna(loteVacunaClass *value)
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

atencionClass::atencionClass(string fecha, personalClass *enfermera, loteVacunaClass *vacuna)
{
    this->fecha = fecha;
    this->enfermera = enfermera;
    this->vacuna = vacuna;
}

atencionClass::atencionClass()
{

}

atencionClass::~atencionClass()
{

}

