#ifndef BUTACACLASS_H
#define BUTACACLASS_H

#include "clienteclass.h"

class butacaClass
{
private:
    static int contador;
    clienteClass *cliente;
    string codigo;
    bool estado;
public:
    butacaClass();
    clienteClass *getCliente() const;
    void setCliente(clienteClass *value);
    bool getEstado() const;
    void setEstado(bool value);
};

#endif // BUTACACLASS_H
