#include "clienteadqui.h"

string clienteAdqui::getName() const
{
    return name;
}

void clienteAdqui::setName(const string &value)
{
    name = value;
}

string clienteAdqui::getCodigo() const
{
    return codigo;
}

void clienteAdqui::setCodigo(const string &value)
{
    codigo = value;
}

string clienteAdqui::getApellido() const
{
    return apellido;
}

void clienteAdqui::setApellido(const string &value)
{
    apellido = value;
}

string clienteAdqui::getDni() const
{
    return dni;
}

void clienteAdqui::setDni(const string &value)
{
    dni = value;
}

listaAdquiridos *clienteAdqui::getLA() const
{
    return lA;
}

void clienteAdqui::setLA(listaAdquiridos *value)
{
    lA = value;
}

clienteAdqui::clienteAdqui()
{
    this->lA = new listaAdquiridos();
}

clienteAdqui::~clienteAdqui()
{

}
