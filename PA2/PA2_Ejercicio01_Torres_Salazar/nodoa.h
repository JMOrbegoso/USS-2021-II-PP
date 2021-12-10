#ifndef NODOA_H
#define NODOA_H

#include <adquisicion.h>

class nodoA
{
private:
    adquisicion *adquirido;
    nodoA *sgte;
    nodoA *ant;
public:
    nodoA();
    ~nodoA();
    adquisicion *getAdquirido() const;
    void setAdquirido(adquisicion *value);
    nodoA *getSgte() const;
    void setSgte(nodoA *value);
    nodoA *getAnt() const;
    void setAnt(nodoA *value);
};

#endif // NODOA_H
