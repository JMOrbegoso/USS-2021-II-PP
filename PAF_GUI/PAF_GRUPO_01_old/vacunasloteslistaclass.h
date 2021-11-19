#ifndef VACUNASLOTESLISTACLASS_H
#define VACUNASLOTESLISTACLASS_H
#include <vacunaloteclass.h>

class vacunasLotesListaClass{
private:
    vacunaLoteClass *cab;
    int max;
    int cant;
public:
    vacunasLotesListaClass();
    ~vacunasLotesListaClass();
    vacunaLoteClass *getCab() const;
    void setCab(vacunaLoteClass *value);
    int getMax() const;
    void setMax(int value);
    int getCant() const;
    void setCant(int value);
};

#endif // VACUNASLOTESLISTACLASS_H
