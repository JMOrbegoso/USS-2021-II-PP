#ifndef LISTAENFERMERASCLASS_H
#define LISTAENFERMERASCLASS_H
#include <nodoenfermeraclass.h>

class listaEnfermerasClass{
private:
    nodoEnfermeraClass *cab;
    unsigned short cant;
public:
    listaEnfermerasClass();
    ~listaEnfermerasClass();
    nodoEnfermeraClass *getCab() const;
    void setCab(nodoEnfermeraClass *value);
    unsigned short getCant() const;
    void setCant(unsigned short value);
};

#endif // LISTAENFERMERASCLASS_H
