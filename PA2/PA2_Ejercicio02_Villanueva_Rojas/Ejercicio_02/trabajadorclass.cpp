#include "trabajadorclass.h"

int trabajadorClass::contador = 1;

string trabajadorClass::getAccion() const
{
    return accion;
}

void trabajadorClass::setAccion(const string &value)
{
    accion = value;
}

trabajadorClass::trabajadorClass()
{

}

trabajadorClass::trabajadorClass(string nombre, string apelli, string dniPer, int edaPer, bool genero, string accion) : personaClass(nombre, apelli, dniPer, edaPer, genero)
{
    this->codigo = "CLI-" + to_string(trabajadorClass::contador);
    trabajadorClass::contador++;
    this->accion = accion;
}
