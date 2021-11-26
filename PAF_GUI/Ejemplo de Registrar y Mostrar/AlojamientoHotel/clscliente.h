#include <iostream>

using namespace std;

#ifndef CLSCLIENTE_H
#define CLSCLIENTE_H


class clsCliente
{
private:
    static int codigo;
    string nombres;
    string apellidos;
    string fechaNacimiento;
    double sueldo;
    string dni;
    bool genero;
    string direccion;
public:
    clsCliente();
    ~clsCliente();
    string getNombres() const;
    void setNombres(const string &value);
    string getApellidos() const;
    void setApellidos(const string &value);
    string getFechaNacimiento() const;
    void setFechaNacimiento(const string &value);
    double getSueldo() const;
    void setSueldo(double value);
    string getDni() const;
    void setDni(const string &value);
    bool getGenero() const;
    void setGenero(bool value);
    string getDireccion() const;
    void setDireccion(const string &value);
    static int getCodigo();
    static void setCodigo(int value);
};

#endif // CLSCLIENTE_H
