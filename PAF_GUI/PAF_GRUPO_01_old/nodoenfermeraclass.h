#ifndef NODOENFERMERACLASS_H
#define NODOENFERMERACLASS_H
#include <enfermeraclass.h>

class nodoEnfermeraClass{
private:
    enfermeraClass *enfermera;
    nodoEnfermeraClass *sgte;
    nodoEnfermeraClass *ant;
public:
    nodoEnfermeraClass();
    ~nodoEnfermeraClass();
    enfermeraClass *getEnfermera() const;
    void setEnfermera(enfermeraClass *value);
    nodoEnfermeraClass *getSgte() const;
    void setSgte(nodoEnfermeraClass *value);
    nodoEnfermeraClass *getAnt() const;
    void setAnt(nodoEnfermeraClass *value);
};

#endif // NODOENFERMERACLASS_H
