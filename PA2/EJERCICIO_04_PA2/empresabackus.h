#ifndef EMPRESABACKUS_H
#define EMPRESABACKUS_H
#include <listamarcas.h>
#include <listaclientes.h>
#include <listacompras.h>

class empresaBackus{
private:
    listaMarcas *marcas;
    listaClientes *clientes;
    listaCompras *compras;
public:
    empresaBackus();
    listaMarcas *getMarcas() const;
    void setMarcas(listaMarcas *value);
    listaClientes *getClientes() const;
    void setClientes(listaClientes *value);
    listaCompras *getCompras() const;
    void setCompras(listaCompras *value);
    string leerTexto(string mensaje);
    unsigned short leerEntero(string mensaje);
    float leerMoneda(string mensaje);
    int menu();
    void registrarMarcas();
    void registrarLicores();
    void registrarCliente();
    void venderLicor();
    void mostrarClientes();
    void buscarCliente();
    void mostrarLicores();
    void pasarCompra(cliente *clie, licor *lic);
    void mostrarVentas();
};

#endif // EMPRESABACKUS_H
