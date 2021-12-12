#include <iostream>
#ifndef LOTELOCALCLASS_H
#define LOTELOCALCLASS_H

using namespace  std;

class loteGeneralClass{
    static int contador;
    string codigo;
    string nombre;
    int cantidad;
    bool estado;
    string fechaCaducidad;
public:
    loteGeneralClass();
    loteGeneralClass(string nombre, int cantidad, string fechaCaducidad, bool estado);
    string getCodigo() const;
    void setCodigo(const string &value);
    string getNombre() const;
    void setNombre(const string &value);
    int getCantidad() const;
    void setCantidad(int value);
    bool getEstado() const;
    void setEstado(bool value);
    string getFechaCaducidad() const;
    void setFechaCaducidad(const string &value);
};

#endif // LOTELOCALCLASS_H
