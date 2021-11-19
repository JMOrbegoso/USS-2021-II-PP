#include <iostream>
#ifndef PERSONACLASS_H
#define PERSONACLASS_H

using namespace std;

class personaClass{
private:
    string dni;
    string nombre;
    string apellido;
    string telefono;
    unsigned short edad;
    string direccion;
public:
    personaClass();
    ~personaClass();
    string getDni() const;
    void setDni(const string &value);
    string getNombre() const;
    void setNombre(const string &value);
    string getApellido() const;
    void setApellido(const string &value);
    string getTelefono() const;
    void setTelefono(const string &value);
    unsigned short getEdad() const;
    void setEdad(unsigned short value);
    string getDireccion() const;
    void setDireccion(const string &value);
};

#endif // PERSONACLASS_H
