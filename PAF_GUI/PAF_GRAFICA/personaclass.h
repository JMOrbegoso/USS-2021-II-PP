#include <iostream>
#ifndef PERSONACLASS_H
#define PERSONACLASS_H

using namespace std;

class personaClass{
private:
    string nombre;
    string apellido;
    string dni;
    string telefono;
    string direccion;
    int edad;
public:
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
};

#endif // PERSONACLASS_H