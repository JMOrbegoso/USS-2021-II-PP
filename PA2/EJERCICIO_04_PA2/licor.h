#ifndef LICOR_H
#define LICOR_H
#include <licorclass.h>

class licor : public licorClass{
private:
    static int contador;
    string codigo;
    string tipo;
    float precio;
public:
    licor();
    licor(string nombre, string descripcion, string tipo, float precio);
    string getTipo() const;
    void setTipo(const string &value);
    float getPrecio() const;
    void setPrecio(float value);
    void leerLicor(int x);
    string getCodigo() const;
    void setCodigo(const string &value);
};

#endif // LICOR_H
