#include "clienteclass.h"

int clienteClass::contador = 1;

int clienteClass::getCant() const
{
    return cant;
}

void clienteClass::setCant(int value)
{
    cant = value;
}

string clienteClass::getCodigo() const
{
    return codigo;
}

clienteClass::clienteClass()
{

}

clienteClass::clienteClass(string nombre, string apelli, string dniPer, int edaPer, bool genero) : personaClass(nombre, apelli, dniPer, edaPer, genero)
{
    this->codigo = "CLI-" + to_string(clienteClass::contador);
    clienteClass::contador++;
    this->cant = 0;
}
