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
    clienteClass(string nombre, string apelli, string dniPer, int edaPer, bool genero);
    int getCant() const;
    void setCant(int value);
    string getCodigo() const;
};

#endif // CLIENTECLASS_H
