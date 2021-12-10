#ifndef LISTAMARCAS_H
#define LISTAMARCAS_H
#include <nodomarcas.h>

class listaMarcas{
private:
    nodoMarcas *cab;
    int contador;
public:
    listaMarcas();
    nodoMarcas *getCab() const;
    void setCab(nodoMarcas *value);
    int getContador() const;
    void setContador(int value);
    void registrarM();
    void insertarMarca(marca *marc);
    void registrarL();
    nodoMarcas *elegirMarca(nodoMarcas *cabezaM);
    void mostrarL();
};

#endif // LISTAMARCAS_H
