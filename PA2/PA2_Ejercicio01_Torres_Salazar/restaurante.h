#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#include <listacategorias.h>
#include <listaclientes.h>
#include <listaclientesadqui.h>

class restaurante
{
private:
    listaCategorias *lC;
    listaClientes *lClientes;
    listaClientesAdqui *lCliAdqui;
public:
    restaurante();
    ~restaurante();
    listaCategorias *getLC() const;
    void setLC(listaCategorias *value);
    listaClientes *getLClientes() const;
    void setLClientes(listaClientes *value);
    listaClientesAdqui *getLCliAdqui() const;
    void setLCliAdqui(listaClientesAdqui *value);
    int menuOpciones();
    void registrarCategoria();
    void registrarProducto();
    void registrarCliente();
    void venderProductoCliente();
    void pasarDatosCompra(cliente *aux2, producto *pro2);
    void listarVentasRestaurante();
};

#endif // RESTAURANTE_H
