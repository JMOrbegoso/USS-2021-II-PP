#ifndef COMIDA_H
#define COMIDA_H

#include <iostream>
#include <basicas.h>

using namespace std;

class comida
{
private:
    string nombre;
    string descripcion;
public:
    comida();
    comida(string nombre, string descripcion);
    ~comida();
    string getNombre() const;
    void setNombre(const string &value);
    string getDescripcion() const;
    void setDescripcion(const string &value);
};

#endif // COMIDA_H
