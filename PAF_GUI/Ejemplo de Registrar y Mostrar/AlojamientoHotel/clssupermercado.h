#include "iostream"
#include "clslistaclientes.h"

#ifndef CLSSUPERMERCADO_H
#define CLSSUPERMERCADO_H

using namespace std;

class clsSupermercado
{
private:
    string nombre;
    string direccion;
    clsListaClientes *lC;
public:
    clsSupermercado();
    ~clsSupermercado();
    string getNombre() const;
    void setNombre(const string &value);
    string getDireccion() const;
    void setDireccion(const string &value);
    clsListaClientes *getLC() const;
    void setLC(clsListaClientes *value);
};

#endif // CLSSUPERMERCADO_H
