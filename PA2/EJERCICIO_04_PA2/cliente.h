#ifndef CLIENTE_H
#define CLIENTE_H
#include <basicas.h>

class cliente{
private:
    static int contador;
    string codigo;
    string nombre;
    string apellido;
    string dni;
    int edad;
public:
    cliente();
    cliente(string nombre, string apellido, string dni, int edad);
    string getCodigo() const;
    void setCodigo(const string &value);
    string getNombre() const;
    void setNombre(const string &value);
    string getApellido() const;
    void setApellido(const string &value);
    string getDni() const;
    void setDni(const string &value);
    int getEdad() const;
    void setEdad(int value);
    void leerCliente(int x);
    void mostrarResultado();
};

#endif // CLIENTE_H
