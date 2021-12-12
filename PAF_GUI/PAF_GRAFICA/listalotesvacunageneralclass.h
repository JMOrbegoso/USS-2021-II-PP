#ifndef LISTALOTESVACUNAGENERALCLASS_H
#define LISTALOTESVACUNAGENERALCLASS_H
#include <loteGeneralclass.h>

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
    void crecerListaLotes();
    void insertarLote(loteGeneralClass *nuevoLote);
};

#endif // LISTALOTESVACUNAGENERALCLASS_H
