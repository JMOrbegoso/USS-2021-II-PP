#include "categoria.h"

int categoria::contador = 1;

string categoria::getFechaCreada() const
{
    return fechaCreada;
}

void categoria::setFechaCreada(const string &value)
{
    fechaCreada = value;
}

string categoria::getTipoCategoria() const
{
    return tipoCategoria;
}

void categoria::setTipoCategoria(const string &value)
{
    tipoCategoria = value;
}

listaProductos *categoria::getLP() const
{
    return lP;
}

void categoria::setLP(listaProductos *value)
{
    lP = value;
}

string categoria::getCodigo() const
{
    return codigo;
}

void categoria::setCodigo(const string &value)
{
    codigo = value;
}

categoria::categoria()
{
    this->codigo = "Cat-" + to_string(categoria::contador);
    categoria::contador++;
    this->lP = new listaProductos();
}

categoria::categoria(string nombre, string descripcion, string fechaCreada, string tipoCategoria) : comida(nombre, descripcion)
{
    this->fechaCreada = fechaCreada;
    this->tipoCategoria = tipoCategoria;
}

categoria::~categoria()
{

}

void categoria::leerCategoria(unsigned short x){
    system("cls");
    basicas::gotoxy(34, 4); cout << "===============================";
    basicas::gotoxy(34, 5); cout << "| REGISTRO DE CATEGORIA N - " << x + 1 << " |";
    basicas::gotoxy(34, 6); cout << "===============================";
    basicas::gotoxy(30, 8); cout << "Codigo de Categoria: " << this->codigo;
    basicas::gotoxy(30, 9); this->setNombre(basicas::leerTexto("Ingrese Nombre de la Categoria: "));
    basicas::gotoxy(30, 10); this->setDescripcion(basicas::leerTexto("Ingrese Descripcion de la Categoria: "));
    basicas::gotoxy(30, 11); this->fechaCreada = basicas::leerTexto("Ingrese Fecha de Creacion de la Categoria: ");
    basicas::gotoxy(30, 12); this->tipoCategoria = basicas::leerTexto("Ingrese Tipo de Categoria: ");
}


