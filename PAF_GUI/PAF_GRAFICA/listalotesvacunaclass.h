#ifndef LISTALOTESVACUNACLASS_H
#define LISTALOTESVACUNACLASS_H
#include <lotevacunaclass.h>

#define Max 3

class listaLotesVacunaClass{
private:
    void crecerListaLotes();
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
    void insertarLote(loteVacunaClass *lote);
};

#endif // LISTALOTESVACUNACLASS_H
