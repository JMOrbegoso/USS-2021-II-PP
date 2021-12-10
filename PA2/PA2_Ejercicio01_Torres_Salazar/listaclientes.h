#ifndef LISTACLIENTES_H
#define LISTACLIENTES_H

#include <nodocli.h>

class listaClientes
{
private:
    nodoCli *cab;
    unsigned short nClientes;
public:
    listaClientes();
    ~listaClientes();
    nodoCli *getCab() const;
    void setCab(nodoCli *value);
    unsigned short getNClientes() const;
    void setNClientes(unsigned short value);
    void insertarCliente(cliente *cli);
    void registrarClienteRestaurante();
    nodoCli *elegirCliente();
};

#endif // LISTACLIENTES_H
