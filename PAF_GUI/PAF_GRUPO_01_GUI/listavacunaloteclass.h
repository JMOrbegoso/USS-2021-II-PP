#ifndef LISTAVACUNALOTECLASS_H
#define LISTAVACUNALOTECLASS_H
#include <vacunaloteclass.h>

class listaVacunaLoteClass{
private:
    vacunaLoteClass *cab;
    int max;
    int cant;
public:
    listaVacunaLoteClass();
    ~listaVacunaLoteClass();
    vacunaLoteClass *getCab() const;
    void setCab(vacunaLoteClass *value);
    int getMax() const;
    void setMax(int value);
    int getCant() const;
    void setCant(int value);
};

#endif // LISTAVACUNALOTECLASS_H
