#ifndef ATENCIONCLASS_H
#define ATENCIONCLASS_H
#include <personalclass.h>
#include <lotevacunalocalclass.h>

class atencionClass{
private:
    personalClass *enfermera;
    loteVacunaClass *vacuna;
    string fecha;
public:
    atencionClass(string fecha, personalClass *enfermera, loteVacunaClass *vacuna);
    atencionClass();
    ~atencionClass();
    personalClass *getEnfermera() const;
    void setEnfermera(personalClass *value);
    loteVacunaClass *getVacuna() const;
    void setVacuna(loteVacunaClass *value);
    string getFecha() const;
    void setFecha(const string &value);
};

#endif // ATENCIONCLASS_H
