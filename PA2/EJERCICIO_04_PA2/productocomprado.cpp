#include "productocomprado.h"

string productoComprado::getNombre() const
{
    return nombre;
}

void productoComprado::setNombre(const string &value)
{
    nombre = value;
}

string productoComprado::getTipo() const
{
    return tipo;
}

void productoComprado::setTipo(const string &value)
{
    tipo = value;
}

float productoComprado::getPrecio() const
{
    return precio;
}

void productoComprado::setPrecio(float value)
{
    precio = value;
}

productoComprado::productoComprado(){
    this->precio = 0.0;
}
