#ifndef LISTACLIENTES_H
#define LISTACLIENTES_H
#include <nodoclientes.h>

class listaClientes{
private:
    nodoClientes *cab;
    int contador;
public:
    listaClientes();
    nodoClientes *getCab() const;
    void setCab(nodoClientes *value);
    int getContador() const;
    void setContador(int value);
    void registrarC();
    void insertarClientes(cliente *cli);
    void mostrarC();
    void buscarC();
    nodoClientes *elegirCliente(nodoClientes *cabezaC);
};

#endif // LISTACLIENTES_H
