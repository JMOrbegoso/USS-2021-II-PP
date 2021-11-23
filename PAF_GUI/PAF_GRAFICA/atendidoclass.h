#ifndef ATENDIDOCLASS_H
#define ATENDIDOCLASS_H
#include <personaclass.h>
#include <pacienteclass.h>
#include <personalclass.h>
#include <lotevacunalocalclass.h>

class atendidoClass : public personaClass{
private:
    pacienteClass *atendido;
    personalClass *enfermera;
    loteVacunaLocalClass *vacuna;
public:
    atendidoClass();
    ~atendidoClass();
    pacienteClass *getAtendido() const;
    void setAtendido(pacienteClass *value);
    personalClass *getEnfermera() const;
    void setEnfermera(personalClass *value);
    loteVacunaLocalClass *getVacuna() const;
    void setVacuna(loteVacunaLocalClass *value);
};

#endif // ATENDIDOCLASS_H
