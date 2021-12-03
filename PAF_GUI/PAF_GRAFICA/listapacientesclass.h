#ifndef LISTAPACIENTESCLASS_H
#define LISTAPACIENTESCLASS_H
#include <nodopacienteclass.h>

class listaPacientesClass{
private:
    nodoPacienteClass *cab;
    int cant;
public:
    listaPacientesClass();
    ~listaPacientesClass();
    nodoPacienteClass *getCab() const;
    void setCab(nodoPacienteClass *value);
    int getCant() const;
    void setCant(int value);
    void insertarPaciente(pacienteClass *pers);
    listaPacientesClass *buscarDni(string dni);
};

#endif // LISTAPACIENTESCLASS_H
