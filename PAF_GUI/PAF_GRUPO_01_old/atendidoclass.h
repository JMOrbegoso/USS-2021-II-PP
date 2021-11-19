#include <iostream>
#ifndef ATENDIDOCLASS_H
#define ATENDIDOCLASS_H
#include <pacienteclass.h>
#include <enfermeraclass.h>
#include <vacunaloteclass.h>

using namespace std;

class atendidoClass{
private:
    string nombreVacuna;
    string fecha;
    pacienteClass *paciente;
    enfermeraClass *enfermera;
    vacunaLoteClass *dosis;
public:
    atendidoClass();
    ~atendidoClass();
    string getNombreVacuna() const;
    void setNombreVacuna(const string &value);
    string getFecha() const;
    void setFecha(const string &value);
};

#endif // ATENDIDOCLASS_H
