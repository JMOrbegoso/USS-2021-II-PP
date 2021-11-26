#ifndef LISTALOCALESCLASS_H
#define LISTALOCALESCLASS_H
#include <localclass.h>

class listaLocalesClass{
private:
    localClass *cab;
    int cant;
    int max;
public:
    listaLocalesClass();
    ~listaLocalesClass();
    int getCant() const;
    void setCant(int value);
    int getMax() const;
    void setMax(int value);
    void crecerListaLocal();
    void insertarLocal(localClass *local);
    localClass *getCab() const;
    void setCab(localClass *value);
};

#endif // LISTALOCALESCLASS_H
