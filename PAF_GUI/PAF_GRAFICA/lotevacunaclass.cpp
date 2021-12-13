#include "lotevacunaclass.h"

int loteVacunaClass::contador = 1;

string loteVacunaClass::getCodigo() const
{
    return codigo;
}

string loteVacunaClass::getNombre() const
{
    return nombre;
}

void loteVacunaClass::setNombre(const string &value)
{
    nombre = value;
}

int loteVacunaClass::getCantidad() const
{
    return cantidad;
}

void loteVacunaClass::setCantidad(int value)
{
    cantidad = value;
}

string loteVacunaClass::getCaducidad() const
{
    return caducidad;
}

void loteVacunaClass::setCaducidad(const string &value)
{
    caducidad = value;
}

bool loteVacunaClass::getEstado() const
{
    return estado;
}

void loteVacunaClass::setEstado(bool value)
{
    estado = value;
}

loteVacunaClass::loteVacunaClass(string nombre, int cantidad, string caducidad)
{
    this->codigo = "lote-" + to_string(loteVacunaClass::contador);
    loteVacunaClass::contador++;
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->caducidad = caducidad;
    //this->estado = estado;
}

loteVacunaClass::loteVacunaClass(){
    this->estado = false;
    this->codigo = "lote-" + to_string(loteVacunaClass::contador);
    loteVacunaClass::contador++;
}

loteVacunaClass::~loteVacunaClass()
{

}

