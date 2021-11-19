#include "nododoctorclass.h"


doctorClass *nodoDoctorClass::getDoctor() const
{
    return doctor;
}

void nodoDoctorClass::setDoctor(doctorClass *value)
{
    doctor = value;
}

nodoDoctorClass *nodoDoctorClass::getSgte() const
{
    return sgte;
}

void nodoDoctorClass::setSgte(nodoDoctorClass *value)
{
    sgte = value;
}

nodoDoctorClass *nodoDoctorClass::getAnt() const
{
    return ant;
}

void nodoDoctorClass::setAnt(nodoDoctorClass *value)
{
    ant = value;
}
nodoDoctorClass::nodoDoctorClass()
{

}

nodoDoctorClass::~nodoDoctorClass()
{

}

