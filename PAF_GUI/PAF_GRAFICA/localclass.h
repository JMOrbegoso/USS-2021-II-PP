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
    static int codigoLocal;
    string nombreLocal;
    string direccionLocal;
    bool estadoLocal;
public:
    localClass();
    ~localClass();
    listaPersonalClass *getPersonales() const;
    void setPersonales(listaPersonalClass *value);
    listaPacientesClass *getPacientes() const;
    void setPacientes(listaPacientesClass *value);
    almacenClass *getAlmacen() const;
    void setAlmacen(almacenClass *value);
    string getDireccionLocal() const;
    void setDireccionLocal(const string &value);
    bool getEstadoLocal() const;
    void setEstadoLocal(bool value);
    string getNombreLocal() const;
    void setNombreLocal(const string &value);
};

#endif // LOCALCLASS_H
