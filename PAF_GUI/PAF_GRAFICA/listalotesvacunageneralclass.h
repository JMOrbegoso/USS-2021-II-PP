#ifndef LISTALOTESVACUNAGENERALCLASS_H
#define LISTALOTESVACUNAGENERALCLASS_H
#include <lotevacunaclass.h>

class listaLotesVacunaGeneralClass{
private:
    loteVacunaClass *lote;
    int cant;
    int max;
public:
    listaLotesVacunaGeneralClass();
    ~listaLotesVacunaGeneralClass();
    loteVacunaClass *getLote() const;
    void setLote(loteVacunaClass *value);
    int getCant() const;
    void setCant(int value);
    int getMax() const;
    void setMax(int value);
};

#endif // LISTALOTESVACUNAGENERALCLASS_H
