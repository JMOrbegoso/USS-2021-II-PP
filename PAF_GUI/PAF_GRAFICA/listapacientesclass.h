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
};

#endif // LISTAPACIENTESCLASS_H
