#include "producto.h"

int producto::contador = 1;

float producto::getPrecio() const
{
    return precio;
}

void producto::setPrecio(float value)
{
    precio = value;
}

string producto::getNameResponsable() const
{
    return nameResponsable;
}

void producto::setNameResponsable(const string &value)
{
    nameResponsable = value;
}

string producto::getCodigo() const
{
    return codigo;
}

void producto::setCodigo(const string &value)
{
    codigo = value;
}

producto::producto()
{
    this->codigo = "Pro-" + to_string(producto::contador);
    producto::contador++;
    this->precio = 0.0;
}

producto::producto(string nombre, string descripcion, float precio, string nameResponsable) : comida(nombre, descripcion)
{
    this->precio = precio;
    this->nameResponsable = nameResponsable;
}

producto::~producto()
{

}

void producto::leerProducto(unsigned short x){
    system("cls");
    basicas::gotoxy(34, 4); cout << "==============================";
    basicas::gotoxy(34, 5); cout << "| REGISTRO DE PRODUCTO N - " << x + 1 << " |";
    basicas::gotoxy(34, 6); cout << "==============================";
    basicas::gotoxy(30, 8); cout << "Codigo del Producto: " << this->getCodigo();
    basicas::gotoxy(30, 9); this->setNombre(basicas::leerTexto("Ingrese Nombre del Producto: "));
    basicas::gotoxy(30, 10); this->setDescripcion(basicas::leerTexto("Ingrese Descripcion del Producto: "));
    basicas::gotoxy(30, 11); this->precio = basicas::leerFloat("Ingrese Precio del Producto: ");
    basicas::gotoxy(30, 12); this->nameResponsable = basicas::leerTexto("Ingrese Nombre de la Persona Responsable del Producto: ");
}
