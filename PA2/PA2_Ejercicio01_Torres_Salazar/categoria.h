#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <comida.h>
#include <listaproductos.h>

class categoria : public comida
{
private:
    static int contador;
    string codigo;
    string fechaCreada;
    string tipoCategoria;
    listaProductos *lP;
public:
    categoria();
    categoria(string nombre, string descripcion, string fechaCreada, string tipoCategoria);
    ~categoria();
    string getFechaCreada() const;
    void setFechaCreada(const string &value);
    string getTipoCategoria() const;
    void setTipoCategoria(const string &value);
    listaProductos *getLP() const;
    void setLP(listaProductos *value);
    void leerCategoria(unsigned short x);
    string getCodigo() const;
    void setCodigo(const string &value);
};

#endif // CATEGORIA_H
