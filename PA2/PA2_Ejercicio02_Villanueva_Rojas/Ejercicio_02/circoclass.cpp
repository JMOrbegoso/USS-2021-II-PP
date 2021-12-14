#include "circoclass.h"

string circoClass::getNombre() const
{
    return nombre;
}

void circoClass::setNombre(const string &value)
{
    nombre = value;
}

listaZonasClass *circoClass::getLZonas() const
{
    return lZonas;
}

void circoClass::setLZonas(listaZonasClass *value)
{
    lZonas = value;
}

listaClienteClass *circoClass::getLClientes() const
{
    return lClientes;
}

void circoClass::setLClientes(listaClienteClass *value)
{
    lClientes = value;
}

listaTrabajadoresClass *circoClass::getLTrabajadores() const
{
    return lTrabajadores;
}

void circoClass::setLTrabajadores(listaTrabajadoresClass *value)
{
    lTrabajadores = value;
}

listaTicketsClass *circoClass::getLTickets() const
{
    return lTickets;
}

void circoClass::setLTickets(listaTicketsClass *value)
{
    lTickets = value;
}

circoClass::circoClass()
{
    this->lTrabajadores = new listaTrabajadoresClass();
    this->lZonas = new listaZonasClass();
    this->lTickets = new listaTicketsClass();
    this->lClientes = new listaClienteClass();
    this->nombre = "Big Apple";
}
