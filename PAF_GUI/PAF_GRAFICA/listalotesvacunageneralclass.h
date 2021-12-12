#ifndef LISTALOTESVACUNAGENERALCLASS_H
#define LISTALOTESVACUNAGENERALCLASS_H
#include <lotegeneralclass.h>

class listaLotesVacunaGeneralClass{
private:
    loteGeneralClass *lote;
    int cant;
    int max;
public:
    listaLotesVacunaGeneralClass();
    ~listaLotesVacunaGeneralClass();
    loteGeneralClass *getLote() const;
    void setLote(loteGeneralClass *value);
    int getCant() const;
    void setCant(int value);
    int getMax() const;
    void setMax(int value);
};

#endif // LISTALOTESVACUNAGENERALCLASS_H
