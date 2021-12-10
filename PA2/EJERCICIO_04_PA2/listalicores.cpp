#include "listalicores.h"

nodoLicores *listaLicores::getCab() const
{
    return cab;
}

void listaLicores::setCab(nodoLicores *value)
{
    cab = value;
}

int listaLicores::getContador() const
{
    return contador;
}

void listaLicores::setContador(int value)
{
    contador = value;
}

listaLicores::listaLicores(){
    this->cab = NULL;
    this->contador = 0;
}

void listaLicores::insertarL(licor *lic){
    nodoLicores *aux = new (struct nodoLicores);
    nodoLicores *temp = new (struct nodoLicores);
    temp->setInfo(lic);
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

nodoLicores *listaLicores::elegirLicor(nodoLicores *cabezaL){
    nodoLicores*aux = cabezaL;
    unsigned short x = 1, num;
    system("cls");
    basicas::gotoxy(30, 4); cout << "******************";
    basicas::gotoxy(30, 5); cout << "* LISTA DE LICORES *";
    basicas::gotoxy(30, 6); cout << "******************";
    while (aux != NULL){
        basicas::gotoxy(30, 8 + x); cout << x << " .- NOMBRE: " << aux->getInfo()->getNombre();
        aux = aux->getSgte();
        x++;
    }
    do{
        basicas::gotoxy(32, 9 + x); cout  << "Elija Cliente: ";
        cin >> num;
    }while (!(num > 0 && num <= x));
    aux = cabezaL;
    for (int y = 0; y < num - 1; y++){
        aux = aux->getSgte();
    }
    return aux;
}

