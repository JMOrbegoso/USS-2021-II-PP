#include "loteGeneralclass.h"

int loteGeneralClass::contador = 1;

string loteGeneralClass::getCodigo() const
{
    return codigo;
}

void loteGeneralClass::setCodigo(const string &value)
{
    codigo = value;
}

string loteGeneralClass::getNombre() const
{
    return nombre;
}

void loteGeneralClass::setNombre(const string &value)
{
    nombre = value;
}

int loteGeneralClass::getCantidad() const
{
    return cantidad;
}

void loteGeneralClass::setCantidad(int value)
{
    cantidad = value;
}

bool loteGeneralClass::getEstado() const
{
    return estado;
}

void loteGeneralClass::setEstado(bool value)
{
    estado = value;
}

string loteGeneralClass::getFechaCaducidad() const
{
    return fechaCaducidad;
}

void loteGeneralClass::setFechaCaducidad(const string &value)
{
    fechaCaducidad = value;
}
loteGeneralClass::loteGeneralClass(){
    this->estado = true;
}

loteGeneralClass::loteGeneralClass(string nombre, int cantidad, string fechaCaducidad, bool estado)
{
    this->codigo = "lote-" + to_string(loteGeneralClass::contador);
    loteGeneralClass::contador++;
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->estado = estado;
    this->fechaCaducidad = fechaCaducidad;
}
