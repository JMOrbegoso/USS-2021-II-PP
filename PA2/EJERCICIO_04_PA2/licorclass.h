#include <iostream>
#ifndef LICORCLASS_H
#define LICORCLASS_H
#include <basicas.h>

using namespace std;

class licorClass{
private:
    string nombre;
    string descripcion;
public:
    licorClass();
    licorClass(string nomb, string descrip);
    string getCodigo() const;
    void setCodigo(const string &value);
    string getNombre() const;
    void setNombre(const string &value);
    string getDescripcion() const;
    void setDescripcion(const string &value);
};

#endif // LICORCLASS_H
