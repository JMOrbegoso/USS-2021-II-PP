#ifndef LISTAPACIENTECLASS_H
#define LISTAPACIENTECLASS_H
#include <nodopacienteclass.h>

class listaPacienteClass{
private:
    nodoPacienteClass *cab;
    int cant;
public:
    listaPacienteClass();
    ~listaPacienteClass();
    nodoPacienteClass *getCab() const;
    void setCab(nodoPacienteClass *value);
    int getCant() const;
    void setCant(int value);
};

#endif // LISTAPACIENTECLASS_H
