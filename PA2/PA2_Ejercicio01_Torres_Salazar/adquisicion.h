#ifndef ADQUISICION_H
#define ADQUISICION_H

#include <basicas.h>

class adquisicion
{
private:
    string nombre;
    string descripcion;
    float precioA;
    string personaRes;
    string codigo;
public:
    adquisicion();
    adquisicion(string nombre, string descripcion, float precioA, string personaRes);
    ~adquisicion();
    float getPrecioA() const;
    void setPrecioA(float value);
    string getPersonaRes() const;
    void setPersonaRes(const string &value);
    string getNombre() const;
    void setNombre(const string &value);
    string getDescripcion() const;
    void setDescripcion(const string &value);
    string getCodigo() const;
    void setCodigo(const string &value);
    void mostrarProductos(int x);
};

#endif // ADQUISICION_H
