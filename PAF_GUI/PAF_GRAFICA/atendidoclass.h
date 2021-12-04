#ifndef ATENDIDOCLASS_H
#define ATENDIDOCLASS_H
#include <personalclass.h>
#include <lotevacunalocalclass.h>

class atendidoClass{
private:
    personalClass *enfermera;
    loteVacunaLocalClass *vacuna;
    string fecha;
public:
    atendidoClass();
    ~atendidoClass();
    personalClass *getEnfermera() const;
    void setEnfermera(personalClass *value);
    loteVacunaLocalClass *getVacuna() const;
    void setVacuna(loteVacunaLocalClass *value);
    string getFecha() const;
    void setFecha(const string &value);
};

#endif // ATENDIDOCLASS_H
