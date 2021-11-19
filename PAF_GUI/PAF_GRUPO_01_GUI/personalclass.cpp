#include "personalclass.h"


float personalClass::getSuel() const
{
    return suel;
}

void personalClass::setSuel(float value)
{
    suel = value;
}

string personalClass::getHorasTrab() const
{
    return horasTrab;
}

void personalClass::setHorasTrab(const string &value)
{
    horasTrab = value;
}

bool personalClass::getTipoPersl() const
{
    return tipoPersl;
}

void personalClass::setTipoPersl(bool value)
{
    tipoPersl = value;
}
personalClass::personalClass()
{

}

personalClass::~personalClass()
{

}

