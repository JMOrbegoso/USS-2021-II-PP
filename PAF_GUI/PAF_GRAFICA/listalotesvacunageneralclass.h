#ifndef LISTALOTESVACUNAGENERALCLASS_H
#define LISTALOTESVACUNAGENERALCLASS_H
#include <lotegeneralclass.h>

class listaLotesVacunaGeneralClass{
private:
    lotegeneralclass *lote;
    int cant;
    int max;
public:
    listaLotesVacunaGeneralClass();
    ~listaLotesVacunaGeneralClass();
    lotegeneralclass *getLote() const;
    void setLote(lotegeneralclass *value);
    int getCant() const;
    void setCant(int value);
    int getMax() const;
    void setMax(int value);
};

#endif // LISTALOTESVACUNAGENERALCLASS_H
