#ifndef NODOCLIAD_H
#define NODOCLIAD_H

#include <clienteadqui.h>

class nodoCliAd
{
private:
    clienteAdqui *cliAdqui;
    nodoCliAd *sgte;
    nodoCliAd *ant;
public:
    nodoCliAd();
    ~nodoCliAd();
    clienteAdqui *getCliAdqui() const;
    void setCliAdqui(clienteAdqui *value);
    nodoCliAd *getSgte() const;
    void setSgte(nodoCliAd *value);
    nodoCliAd *getAnt() const;
    void setAnt(nodoCliAd *value);
};

#endif // NODOCLIAD_H
