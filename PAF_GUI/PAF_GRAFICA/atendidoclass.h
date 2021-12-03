#ifndef ATENDIDOCLASS_H
#define ATENDIDOCLASS_H
#include <personalclass.h>
#include <lotevacunalocalclass.h>

class atendidoClass{
private:
    personalClass *enfermera;
    loteVacunaLocalClass *vacuna;
public:
    atendidoClass();
    ~atendidoClass();
    personalClass *getEnfermera() const;
    void setEnfermera(personalClass *value);
    loteVacunaLocalClass *getVacuna() const;
    void setVacuna(loteVacunaLocalClass *value);
};

#endif // ATENDIDOCLASS_H
