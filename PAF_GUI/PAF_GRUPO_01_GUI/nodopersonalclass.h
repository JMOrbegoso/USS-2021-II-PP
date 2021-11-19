#ifndef NODOPERSONALCLASS_H
#define NODOPERSONALCLASS_H
#include <personalclass.h>

class nodoPersonalClass{
private:
    personalClass *pers;
    nodoPersonalClass *sgte;
    nodoPersonalClass *ante;
public:
    nodoPersonalClass();
    ~nodoPersonalClass();
    personalClass *getPers() const;
    void setPers(personalClass *value);
    nodoPersonalClass *getSgte() const;
    void setSgte(nodoPersonalClass *value);
    nodoPersonalClass *getAnte() const;
    void setAnte(nodoPersonalClass *value);
};

#endif // NODOPERSONALCLASS_H
