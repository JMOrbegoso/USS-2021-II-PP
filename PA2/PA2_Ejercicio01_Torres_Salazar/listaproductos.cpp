#include "listaproductos.h"

nodoP *listaProductos::getCab() const
{
    return cab;
}

void listaProductos::setCab(nodoP *value)
{
    cab = value;
}

unsigned short listaProductos::getNProductos() const
{
    return nProductos;
}

void listaProductos::setNProductos(unsigned short value)
{
    nProductos = value;
}

listaProductos::listaProductos()
{
    this->cab = NULL;
    this->nProductos = 0;
}

listaProductos::~listaProductos()
{

}

void listaProductos::insertarProducto(producto *pro){
    nodoP *aux = new (struct nodoP);
    nodoP *temp= new (struct nodoP);
    temp->setProduct(pro);
    temp->setSgte(NULL);
    if (this->cab == NULL){
        this->cab = temp;
        this->cab->setAnt(NULL);
    }else{
        aux = this->cab;
        while (aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
        temp->setAnt(aux);
    }
    this->nProductos++;
}

nodoP *listaProductos::elegirProducto(nodoP *cabezaPro){
    nodoP *aux = cabezaPro;
    unsigned short x = 1, num;
    system("cls");
    basicas::gotoxy(35, 4); cout << "===================";
    basicas::gotoxy(35, 5); cout << "| LISTA PRODUCTOS |";
    basicas::gotoxy(35, 6); cout << "===================";
    while (aux != NULL){
        basicas::gotoxy(30, 8 + x); cout << "[" << x << "]" << " .- Nombre: " << aux->getProduct()->getNombre();
        aux = aux->getSgte();
        x++;
    }
    do{
        basicas::gotoxy(32, 9 + x); cout  << "-> Elija Producto: ";
        cin >> num;
    }while (!(num > 0 && num <= x));
    aux = cabezaPro;
    for (int y = 0; y < num - 1; y++){
        aux = aux->getSgte();
    }
    return aux;
}
