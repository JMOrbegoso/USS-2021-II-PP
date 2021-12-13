#include "butacaclass.h"

int butacaClass::contador = 1;

clienteClass *butacaClass::getCliente() const
{
    return cliente;
}

void butacaClass::setCliente(clienteClass *value)
{
    cliente = value;
}

bool butacaClass::getEstado() const
{
    return estado;
}

void butacaClass::setEstado(bool value)
{
    estado = value;
}

string butacaClass::getCodigo() const
{
    return codigo;
}

butacaClass::butacaClass()
{
    this->codigo = "CLI-" + to_string(butacaClass::contador);
    butacaClass::contador++;
    this->cliente = NULL;
    this->estado = FALSE;
}
