#ifndef CLIENTECLASS_H
#define CLIENTECLASS_H

#include "personaclass.h"

class clienteClass : personaClass
{
private:
    static int contador;
    string codigo;
    int cant; //Cantidad de Tickets
public:
    clienteClass();
    clienteClass(string nombre, string apelli, string dniPer, int edaPer, bool genero, int cant);
    int getCant() const;
    void setCant(int value);
};

#endif // CLIENTECLASS_H
