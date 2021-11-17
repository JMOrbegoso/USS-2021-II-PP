#ifndef LISTAALMACENESCLASS_H
#define LISTAALMACENESCLASS_H
#include <almacenclass.h>

class listaAlmacenesClass{
private:
    almacenClass *cab;
    int max;
    int cant;
public:
    listaAlmacenesClass();
    ~listaAlmacenesClass();
    almacenClass *getCab() const;
    void setCab(almacenClass *value);
    int getMax() const;
    void setMax(int value);
    int getCant() const;
    void setCant(int value);
};

#endif // LISTAALMACENESCLASS_H
