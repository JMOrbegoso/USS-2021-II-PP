#ifndef LISTACLIENTESADQUI_H
#define LISTACLIENTESADQUI_H

#include <nodocliad.h>
#include <cliente.h>
#include <producto.h>

class listaClientesAdqui
{
private:
    nodoCliAd *cab;
    unsigned short nClientesAdqui;
public:
    listaClientesAdqui();
    ~listaClientesAdqui();
    nodoCliAd *getCab() const;
    void setCab(nodoCliAd *value);
    unsigned short getNClientesAdqui() const;
    void setNClientesAdqui(unsigned short value);
    void insertarClienteCompra(clienteAdqui *cli);
    void clienteEspecifico(clienteAdqui *cli, int x);
    void encabezado(int x);
    void mostrarClienteVentas();
    void mostrarVentas();
};

#endif // LISTACLIENTESADQUI_H
