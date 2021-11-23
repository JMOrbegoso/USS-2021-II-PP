#ifndef LISTAPERSONALCLASS_H
#define LISTAPERSONALCLASS_H
#include <nodopersonalclass.h>

class listaPersonalClass{
private:
    nodoPersonalClass *cab;
    int cant;
public:
    listaPersonalClass();
    ~listaPersonalClass();
    nodoPersonalClass *getCab() const;
    void setCab(nodoPersonalClass *value);
    int getCant() const;
    void setCant(int value);
};

#endif // LISTAPERSONALCLASS_H
