#ifndef NODOATENDIDOCLASS_H
#define NODOATENDIDOCLASS_H
#include <atendidoclass.h>

class nodoAtendidoClass{
private:
    atendidoClass *atendido;
    nodoAtendidoClass *sgte;
    nodoAtendidoClass *ant;
public:
    nodoAtendidoClass();
    ~nodoAtendidoClass();
    atendidoClass *getAtendido() const;
    void setAtendido(atendidoClass *value);
    nodoAtendidoClass *getSgte() const;
    void setSgte(nodoAtendidoClass *value);
    nodoAtendidoClass *getAnt() const;
    void setAnt(nodoAtendidoClass *value);
};

#endif // NODOATENDIDOCLASS_H
