#ifndef LOCALCLASS_H
#define LOCALCLASS_H
#include <listapersonalclass.h>
#include <listapacientesclass.h>
#include <almacenclass.h>

class localClass{
private:
    listaPersonalClass *personales;
    listaPacientesClass *pacientes;
    almacenClass *almacen;
public:
    localClass();
    ~localClass();
    listaPersonalClass *getPersonales() const;
    void setPersonales(listaPersonalClass *value);
    listaPacientesClass *getPacientes() const;
    void setPacientes(listaPacientesClass *value);
    almacenClass *getAlmacen() const;
    void setAlmacen(almacenClass *value);
};

#endif // LOCALCLASS_H
