#ifndef LISTADOCTORESCLASS_H
#define LISTADOCTORESCLASS_H
#include <nododoctorclass.h>

class listaDoctoresClass{
    nodoDoctorClass *cab;
    int cant;
public:
    listaDoctoresClass();
    ~listaDoctoresClass();
    nodoDoctorClass *getCab() const;
    void setCab(nodoDoctorClass *value);
    int getCant() const;
    void setCant(int value);
};

#endif // LISTADOCTORESCLASS_H
