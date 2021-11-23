#ifndef LISTALOCALESCLASS_H
#define LISTALOCALESCLASS_H
#include <localclass.h>

class listaLocalesClass{
private:
    localClass *local;
    int cant;
    int max;
public:
    listaLocalesClass();
    ~listaLocalesClass();
    localClass *getLocal() const;
    void setLocal(localClass *value);
    int getCant() const;
    void setCant(int value);
    int getMax() const;
    void setMax(int value);
};

#endif // LISTALOCALESCLASS_H
