#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <comida.h>

class producto : public comida
{
private:
    static int contador;
    string codigo;
    float precio;
    string nameResponsable;
public:
    producto();
    producto(string nombre, string descripcion, float precio, string nameResponsable);
    ~producto();
    float getPrecio() const;
    void setPrecio(float value);
    string getNameResponsable() const;
    void setNameResponsable(const string &value);
    void leerProducto(unsigned short x);
    string getCodigo() const;
    void setCodigo(const string &value);
};

#endif // PRODUCTO_H
