#ifndef ALMACENCLASS_H
#define ALMACENCLASS_H
#include <listalotesvacunaclass.h>

class almacenClass{
private:
    listaLotesVacunaClass *lotes;
public:
    almacenClass();
    ~almacenClass();
    listaLotesVacunaClass *getLotes() const;
    void setLotes(listaLotesVacunaClass *value);
};

#endif // ALMACENCLASS_H
