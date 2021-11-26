#ifndef LISTALOTESVACUNACLASS_H
#define LISTALOTESVACUNACLASS_H
#include <lotevacunalocalclass.h>

class listaLotesVacunaClass{
private:
    loteVacunaLocalClass *cab;
    int cant;
    int max;
public:
    listaLotesVacunaClass();
    ~listaLotesVacunaClass();
    int getCant() const;
    void setCant(int value);
    int getMax() const;
    void setMax(int value);
    loteVacunaLocalClass *getCab() const;
    void setCab(loteVacunaLocalClass *value);
};

#endif // LISTALOTESVACUNACLASS_H
