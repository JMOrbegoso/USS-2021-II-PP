#include <iostream>
#ifndef LOTEVACUNACLASS_H
#define LOTEVACUNACLASS_H

using namespace std;

class loteVacunaClass{
    string nombre; //pera toy comiendo mi sopa
    int cantidad;
    string caducidad; //si
    bool estado;
public:
    loteVacunaClass();
    ~loteVacunaClass();
    string getNombre() const;
    void setNombre(const string &value);
    int getCantidad() const;
    void setCantidad(int value);
    string getCaducidad() const;
    void setCaducidad(const string &value);
    bool getEstado() const;
    void setEstado(bool value);
};

#endif // LOTEVACUNACLASS_H
