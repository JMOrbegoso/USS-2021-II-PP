#ifndef CLIENTE_H
#define CLIENTE_H

#include <basicas.h>
#include <listaadquiridos.h>

class cliente
{
private:
    static int contador;
    string codigo;
    string nombres;
    string apellidos;
    string dni;
    unsigned short edad;
public:
    cliente();
    cliente(string nombres, string apellidos, string dni, unsigned short edad);
    ~cliente();
    string getCodigo() const;
    void setCodigo(const string &value);
    string getNombres() const;
    void setNombres(const string &value);
    string getApellidos() const;
    void setApellidos(const string &value);
    string getDni() const;
    void setDni(const string &value);
    unsigned short getEdad() const;
    void setEdad(unsigned short value);
    void leerCliente(unsigned short x);
};

#endif // CLIENTE_H
