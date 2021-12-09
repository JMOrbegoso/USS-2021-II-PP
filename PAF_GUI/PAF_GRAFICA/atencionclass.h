#ifndef ATENCIONCLASS_H
#define ATENCIONCLASS_H
#include <personalclass.h>
#include <lotevacunalocalclass.h>

class atencionClass{
private:
    personalClass *enfermera;
    loteVacunaLocalClass *vacuna;
    string fecha;
public:
    atencionClass(string fecha, personalClass *enfermera, loteVacunaLocalClass *vacuna);
    atencionClass();
    ~atencionClass();
    personalClass *getEnfermera() const;
    void setEnfermera(personalClass *value);
    loteVacunaLocalClass *getVacuna() const;
    void setVacuna(loteVacunaLocalClass *value);
    string getFecha() const;
    void setFecha(const string &value);
};

#endif // ATENCIONCLASS_H
