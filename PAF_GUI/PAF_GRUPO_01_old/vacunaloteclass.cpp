#include "vacunaloteclass.h"


string vacunaLoteClass::getNombre() const
{
    return nombre;
}

void vacunaLoteClass::setNombre(const string &value)
{
    nombre = value;
}

unsigned short vacunaLoteClass::getNumeroDeVacunas() const
{
    return numeroDeVacunas;
}

void vacunaLoteClass::setNumeroDeVacunas(unsigned short value)
{
    numeroDeVacunas = value;
}

string vacunaLoteClass::getFechaCaducidad() const
{
    return fechaCaducidad;
}

void vacunaLoteClass::setFechaCaducidad(const string &value)
{
    fechaCaducidad = value;
}

bool vacunaLoteClass::getEstado() const
{
    return estado;
}

void vacunaLoteClass::setEstado(bool value)
{
    estado = value;
}
vacunaLoteClass::vacunaLoteClass()
{

}

vacunaLoteClass::~vacunaLoteClass()
{

}

