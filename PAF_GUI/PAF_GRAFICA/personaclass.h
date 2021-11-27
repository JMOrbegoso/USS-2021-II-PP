#include <iostream>
#ifndef PERSONACLASS_H
#define PERSONACLASS_H
#define Max 3

using namespace std;

class personaClass{
private:
    static int contador;
    string codigo;
    string nombre;
    string apellido;
    string dni;
    string telefono;
    string direccion;
    int edad;
public:
    personaClass(string nombre, string apellido, string dni, string telefono, string direccion, int edad);
    personaClass();
    ~personaClass();
    string getNombre() const;
    void setNombre(const string &value);
    string getApellido() const;
    void setApellido(const string &value);
    string getDni() const;
    void setDni(const string &value);
    string getTelefono() const;
    void setTelefono(const string &value);
    string getDireccion() const;
    void setDireccion(const string &value);
    int getEdad() const;
    void setEdad(int value);
    string getCodigo() const;
};

#endif // PERSONACLASS_H
