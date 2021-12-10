#ifndef NODOLICORES_H
#define NODOLICORES_H
#include <licor.h>

class nodoLicores{
private:
    licor *info;
    nodoLicores *sgte;
    nodoLicores *ant;
public:
    nodoLicores();
    licor *getInfo() const;
    void setInfo(licor *value);
    nodoLicores *getSgte() const;
    void setSgte(nodoLicores *value);
    nodoLicores *getAnt() const;
    void setAnt(nodoLicores *value);
};

#endif // NODOLICORES_H
