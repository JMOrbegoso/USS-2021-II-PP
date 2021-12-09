#ifndef LISTALOTESVACUNACLASS_H
#define LISTALOTESVACUNACLASS_H
#include <lotevacunaclass.h>

class listaLotesVacunaClass{
private:
    loteVacunaClass *cab;
    int cant;
    int max;
public:
    listaLotesVacunaClass();
    ~listaLotesVacunaClass();
    int getCant() const;
    void setCant(int value);
    int getMax() const;
    void setMax(int value);
    loteVacunaClass *getCab() const;
    void setCab(loteVacunaClass *value);
};

#endif // LISTALOTESVACUNACLASS_H
