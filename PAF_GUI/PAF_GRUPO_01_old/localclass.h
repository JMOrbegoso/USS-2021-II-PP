#ifndef LOCALCLASS_H
#define LOCALCLASS_H
#include <listadoctoresclass.h>
#include <listapacienteclass.h>
#include <listaenfermerasclass.h>
#include <listaatendidosclass.h>

class localClass{
private:
    static int codigo;
    string direccion;
    bool estado;
    listaDoctoresClass *doctores;
    listaPacienteClass *pacientes;
    listaEnfermerasClass *enfermeras;
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
    listaDoctoresClass *getDoctores() const;
    void setDoctores(listaDoctoresClass *value);
    listaPacienteClass *getPacientes() const;
    void setPacientes(listaPacienteClass *value);
    listaEnfermerasClass *getEnfermeras() const;
    void setEnfermeras(listaEnfermerasClass *value);
    listaAtendidosClass *getAtendidos() const;
    void setAtendidos(listaAtendidosClass *value);
};

#endif // LOCALCLASS_H
