#include "clssupermercado.h"


string clsSupermercado::getNombre() const
{
    return nombre;
}

void clsSupermercado::setNombre(const string &value)
{
    nombre = value;
}

string clsSupermercado::getDireccion() const
{
    return direccion;
}

void clsSupermercado::setDireccion(const string &value)
{
    direccion = value;
}

clsListaClientes *clsSupermercado::getLC() const
{
    return lC;
}

void clsSupermercado::setLC(clsListaClientes *value)
{
    lC = value;
}
clsSupermercado::clsSupermercado()
{
    this->nombre = "Supermercado Bravo SRL";
    this->direccion = "Av Leguia 567. Chiclayo";
    this->lC = new clsListaClientes();
}

clsSupermercado::~clsSupermercado()
{
    
}

