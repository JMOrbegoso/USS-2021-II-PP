#include <iostream>

using namespace std;

#ifndef CLSPERSONA_H
#define CLSPERSONA_H

class clsPersona // abstracta
{
private:
    static int codigo;
    string nombres;
    string apellidos;
    string dni;
    string direccion;
public:
    clsPersona();
    clsPersona( string nombres, string apellidos, string dni, string direccion );
    ~clsPersona();
    string getNombres() const;
    void setNombres(const string &value);
    string getApellidos() const;
    void setApellidos(const string &value);
    string getDni() const;
    void setDni(const string &value);
    string getDireccion() const;
    void setDireccion(const string &value);
    virtual void mostrar(); // le da preferencia a los mostrar de las clases hijas
};

#endif // CLSPERSONA_H
