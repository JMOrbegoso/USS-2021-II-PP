#include <iostream>
#ifndef LOTELOCALCLASS_H
#define LOTELOCALCLASS_H

using namespace  std;

class loteGeneralClass{
    static int contado;
    string codigo;
    string nombre;
    int cantidad;
    bool estado;
public:
    loteGeneralClass();
    string getCodigo() const;
    void setCodigo(const string &value);
    string getNombre() const;
    void setNombre(const string &value);
    int getCantidad() const;
    void setCantidad(int value);
    bool getEstado() const;
    void setEstado(bool value);
};

#endif // LOTELOCALCLASS_H
