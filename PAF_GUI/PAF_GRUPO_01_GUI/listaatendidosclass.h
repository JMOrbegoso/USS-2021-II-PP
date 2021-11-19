#ifndef LISTAATENDIDOSCLASS_H
#define LISTAATENDIDOSCLASS_H
#include <nodoatendidoclass.h>

class listaAtendidosClass{
private:
    nodoAtendidoClass *cab;
    int cant;
public:
    listaAtendidosClass();
    ~listaAtendidosClass();
    nodoAtendidoClass *getCab() const;
    void setCab(nodoAtendidoClass *value);
    int getCant() const;
    void setCant(int value);
};

#endif // LISTAATENDIDOSCLASS_H
