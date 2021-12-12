#ifndef NODOBUTACASCLASS_H
#define NODOBUTACASCLASS_H

#include "butacaclass.h"

class nodoButacasClass
{
private:
    butacaClass *info;
    nodoButacasClass *sgte;
public:
    nodoButacasClass();
    butacaClass *getInfo() const;
    void setInfo(butacaClass *value);
    nodoButacasClass *getSgte() const;
    void setSgte(nodoButacasClass *value);
};

#endif // NODOBUTACASCLASS_H
