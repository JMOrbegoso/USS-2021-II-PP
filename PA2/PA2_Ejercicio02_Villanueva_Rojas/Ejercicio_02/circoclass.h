#ifndef CIRCOCLASS_H
#define CIRCOCLASS_H

#include "listazonasclass.h"
#include "listaclienteclass.h"
#include "listatrabajadoresclass.h"
#include "listaticketsclass.h"

class circoClass
{
private:
    string nombre;
    listaZonasClass *lZonas;
    listaClienteClass *lClientes;
    listaTrabajadoresClass *lTrabajadores;
    listaTicketsClass *lTickets;
public:
    circoClass();
    string getNombre() const;
    void setNombre(const string &value);
    listaZonasClass *getLZonas() const;
    void setLZonas(listaZonasClass *value);
    listaClienteClass *getLClientes() const;
    void setLClientes(listaClienteClass *value);
    listaTrabajadoresClass *getLTrabajadores() const;
    void setLTrabajadores(listaTrabajadoresClass *value);
    listaTicketsClass *getLTickets() const;
    void setLTickets(listaTicketsClass *value);
};

#endif // CIRCOCLASS_H
