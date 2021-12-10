#ifndef NODOCLI_H
#define NODOCLI_H

#include <cliente.h>

class nodoCli
{
private:
    cliente *client;
    nodoCli *sgte;
    nodoCli *ant;
public:
    nodoCli();
    ~nodoCli();
    cliente *getClient() const;
    void setClient(cliente *value);
    nodoCli *getSgte() const;
    void setSgte(nodoCli *value);
    nodoCli *getAnt() const;
    void setAnt(nodoCli *value);
};

#endif // NODOCLI_H
