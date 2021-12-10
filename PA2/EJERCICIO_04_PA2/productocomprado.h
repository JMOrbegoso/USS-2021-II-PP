#ifndef PRODUCTOCOMPRADO_H
#define PRODUCTOCOMPRADO_H
#include <licorclass.h>

class productoComprado{
    string nombre;
    string tipo;
    float precio;
public:
    productoComprado();
    string getNombre() const;
    void setNombre(const string &value);
    string getTipo() const;
    void setTipo(const string &value);
    float getPrecio() const;
    void setPrecio(float value);
};

#endif // PRODUCTOCOMPRADO_H
