#include <iostream>
#ifndef ATENDIDOCLASS_H
#define ATENDIDOCLASS_H
#include <pacienteclass.h>
#include <personalclass.h>
#include <vacunaloteclass.h>

using namespace std;

class atendidoClass{
private:
    string nombreVacuna;
    string fecha;
    pacienteClass *paciente;
    personalClass *personal;
    vacunaLoteClass *dosis;
public:
    atendidoClass();
    ~atendidoClass();
    string getNombreVacuna() const;
    void setNombreVacuna(const string &value);
    string getFecha() const;
    void setFecha(const string &value);
    personalClass *getPersonal() const;
    void setPersonal(personalClass *value);
};

#endif // ATENDIDOCLASS_H
