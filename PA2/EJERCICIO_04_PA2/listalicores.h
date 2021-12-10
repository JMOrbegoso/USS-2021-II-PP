#ifndef LISTALICORES_H
#define LISTALICORES_H
#include <nodolicores.h>

class listaLicores{
private:
    nodoLicores *cab;
    int contador;
public:
    listaLicores();
    nodoLicores *getCab() const;
    void setCab(nodoLicores *value);
    int getContador() const;
    void setContador(int value);
    void insertarL(licor *lic);
    nodoLicores *elegirLicor(nodoLicores *cabezaL);
};

#endif // LISTALICORES_H
