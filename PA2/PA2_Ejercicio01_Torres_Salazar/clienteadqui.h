#ifndef CLIENTEADQUI_H
#define CLIENTEADQUI_H

#include <listaadquiridos.h>

class clienteAdqui
{
private:
    string name;
    string codigo;
    string apellido;
    string dni;
    listaAdquiridos *lA;
public:
    clienteAdqui();
    ~clienteAdqui();
    string getName() const;
    void setName(const string &value);
    string getCodigo() const;
    void setCodigo(const string &value);
    string getApellido() const;
    void setApellido(const string &value);
    string getDni() const;
    void setDni(const string &value);
    listaAdquiridos *getLA() const;
    void setLA(listaAdquiridos *value);
};

#endif // CLIENTEADQUI_H
