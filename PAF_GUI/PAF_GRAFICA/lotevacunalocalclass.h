#ifndef LOTEVACUNALOCALCLASS_H
#define LOTEVACUNALOCALCLASS_H
#include <lotevacunaclass.h>

class loteVacunaLocalClass{
private:
    loteVacunaClass *lote;
public:
    loteVacunaLocalClass();
    ~loteVacunaLocalClass();
    loteVacunaClass *getLote() const;
    void setLote(loteVacunaClass *value);
};

#endif // LOTEVACUNALOCALCLASS_H
