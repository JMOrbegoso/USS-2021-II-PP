#ifndef NODOPERSONALCLASS_H
#define NODOPERSONALCLASS_H
#include <personalclass.h>

class nodoPersonalClass{
    personalClass *info;
    nodoPersonalClass *sgte;
    nodoPersonalClass *ant;
public:
    nodoPersonalClass();
    ~nodoPersonalClass();
    personalClass *getInfo() const;
    void setInfo(personalClass *value);
    nodoPersonalClass *getSgte() const;
    void setSgte(nodoPersonalClass *value);
    nodoPersonalClass *getAnt() const;
    void setAnt(nodoPersonalClass *value);
};

#endif // NODOPERSONALCLASS_H
