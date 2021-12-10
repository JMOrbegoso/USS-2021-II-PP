#ifndef LISTAADQUIRIDOS_H
#define LISTAADQUIRIDOS_H

#include <nodoa.h>

class listaAdquiridos
{
private:
    nodoA *cab;
    unsigned short nAdquiridos;
public:
    listaAdquiridos();
    ~listaAdquiridos();
    nodoA *getCab() const;
    void setCab(nodoA *value);
    unsigned short getNAdquiridos() const;
    void setNAdquiridos(unsigned short value);
    void insertarAdquisicion(adquisicion *adqui);
};

#endif // LISTAADQUIRIDOS_H
