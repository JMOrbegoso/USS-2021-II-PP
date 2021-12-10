#include "listacompras.h"

nodoCompras *listaCompras::getCab() const
{
    return cab;
}

void listaCompras::setCab(nodoCompras *value)
{
    cab = value;
}

int listaCompras::getContador() const
{
    return contador;
}

void listaCompras::setContador(int value)
{
    contador = value;
}

listaCompras::listaCompras(){
    this->cab = NULL;
    this->contador = 0;
}

void listaCompras::insertarCompra(compra *com){
    nodoCompras *aux = new (struct nodoCompras);
    nodoCompras *temp = new (struct nodoCompras);
    temp->setInfo(com);
    temp->setSgte(NULL);
    if(this->cab == NULL){
        this->cab = temp;
        this->cab->setAnt(NULL);
    }else{
        aux = this->cab;
        while(aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
        temp->setAnt(aux);
    }
    this->contador++;
}

void listaCompras::mostrarV(){
    nodoCompras *aux = this->cab;
    nodoProductoComprado *aux2 = NULL;
    int x = 0;
    basicas::encabezadoMostrarVentas();
    while(aux != NULL){
        basicas::gotoxy(5,5+x); cout << "DNI: " << aux->getInfo()->getDni() << "NOMBRE: " << aux->getInfo()->getNombre() << "APELLIDOS: " << aux->getInfo()->getApellido();
        aux2 = aux->getInfo()->getLicores()->getCab();
        basicas::gotoxy(1, 7+x); cout << aux->getInfo()->getCodigo();
        basicas::encabezadoLicoresVendidos(x);
        while(aux2 != NULL){
            basicas::gotoxy(10,7+x); cout << aux2->getInfo()->getNombre();
            basicas::gotoxy(20,7+x); cout << aux2->getInfo()->getTipo();
            basicas::gotoxy(30,7+x); cout << aux2->getInfo()->getPrecio();
            aux2 = aux2->getSgte();
            x++;
        }
        aux = aux->getSgte();
        x+=4;
    }
    basicas::gotoxy(38, 6+x); system("pause");
    x++;
}
