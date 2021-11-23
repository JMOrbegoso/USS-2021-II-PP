#ifndef LISTALOTESVACUNACLASS_H
#define LISTALOTESVACUNACLASS_H
#include <lotevacunalocalclass.h>

class listaLotesVacunaClass{
private:
    loteVacunaLocalClass *lote;
    int cant;
    int max;
public:
    listaLotesVacunaClass();
    ~listaLotesVacunaClass();
    loteVacunaLocalClass *getLote() const;
    void setLote(loteVacunaLocalClass *value);
    int getCant() const;
    void setCant(int value);
    int getMax() const;
    void setMax(int value);
};

#endif // LISTALOTESVACUNACLASS_H
