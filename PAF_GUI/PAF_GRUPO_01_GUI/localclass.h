#ifndef LOCALCLASS_H
#define LOCALCLASS_H
#include <listapacienteclass.h>
#include <listaatendidosclass.h>
#include <almacenclass.h>
#include <listapersonalclass.h>

class localClass{
private:
    static int codigo;
    string direccion;
    bool estado;
    almacenClass *almacen;
    listaPacienteClass *pacientes;
    listaPersonalClass *personales;
    listaAtendidosClass *atendidos;
public:
    localClass();
    ~localClass();
    static int getCodigo();
    static void setCodigo(int value);
    string getDireccion() const;
    void setDireccion(const string &value);
    bool getEstado() const;
    void setEstado(bool value);
    listaPacienteClass *getPacientes() const;
    void setPacientes(listaPacienteClass *value);
    listaAtendidosClass *getAtendidos() const;
    void setAtendidos(listaAtendidosClass *value);
    almacenClass *getAlmacen() const;
    void setAlmacen(almacenClass *value);
    listaPersonalClass *getPersonales() const;
    void setPersonales(listaPersonalClass *value);
};

#endif // LOCALCLASS_H
