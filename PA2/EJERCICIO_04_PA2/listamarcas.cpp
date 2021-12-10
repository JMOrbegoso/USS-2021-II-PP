#include "listamarcas.h"

nodoMarcas *listaMarcas::getCab() const
{
    return cab;
}

void listaMarcas::setCab(nodoMarcas *value)
{
    cab = value;
}

int listaMarcas::getContador() const
{
    return contador;
}

void listaMarcas::setContador(int value)
{
    contador = value;
}

listaMarcas::listaMarcas(){
    this->cab = NULL;
    this->contador = 0;
}

void listaMarcas::mostrarL(){
    nodoMarcas *aux = this->cab;
    nodoLicores *aux1 = NULL;
    int x = 0;
    if(aux->getInfo()->getLicores()->getContador() > 0){
        basicas::encabezadoMostrarLicores();
        while(aux != NULL){
            basicas::gotoxy(4,5+x); cout << "MARCA " << aux->getInfo()->getCodigo() << ": " << aux->getInfo()->getNombre();
            aux1 = aux->getInfo()->getLicores()->getCab();
            basicas::encabezadoTituloLicores(x);
            while(aux1 != NULL){
                basicas::gotoxy(1,7+x  ); cout << aux1->getInfo()->getTipo();
                basicas::gotoxy(20,7+x); cout << aux1->getInfo()->getPrecio();
                aux1 = aux1->getSgte();
                x++;
            }
            aux = aux->getSgte();
            x+=3;
        }
        basicas::gotoxy(1, 9+x); system("pause");
        x++;
    }else{
        basicas::gotoxy(38, 5); cout << "NO HAY REGISTROS DE TIPOS DE LICORES - Opcion 2 ";
        basicas::gotoxy(38, 6); system("pause");
    }
}

void listaMarcas::insertarMarca(marca *marc){
    nodoMarcas *aux = new (struct nodoMarcas);
    nodoMarcas *temp = new (struct nodoMarcas);
    temp->setInfo(marc);
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

nodoMarcas *listaMarcas::elegirMarca(nodoMarcas *cabezaM){
    nodoMarcas *aux = cabezaM;
    unsigned short x = 1, num;
    system("cls");
    basicas::gotoxy(30, 4); cout << "*****************";
    basicas::gotoxy(30, 5); cout << "*LISTA DE MARCAS*";
    basicas::gotoxy(30, 6); cout << "*****************";
    while (aux != NULL){
        basicas::gotoxy(30, 8 + x); cout << x << " .- CODIGO: " << aux->getInfo()->getCodigo() << "  - NOMBRE: " << aux->getInfo()->getNombre();
        aux = aux->getSgte();
        x++;
    }
    do{
        basicas::gotoxy(32, 8 + x); cout  << "Elija la Categoria: ";
        cin >> num;
    }while (!(num > 0 && num <= x));
    aux = cabezaM;
    for (int y = 0; y < num - 1; y++){
        aux = aux->getSgte();
    }
    return aux;
}

void listaMarcas::registrarL(){
    if (this->contador > 0){
        nodoMarcas *aux = new nodoMarcas();
        aux = elegirMarca(this->cab);
        if (aux != NULL){
            char rpta;
             do{
                licor *lic = new licor();
                listaLicores *listaL = new listaLicores();
                lic->leerLicor(listaL->getContador());
                marca *temp = new marca();
                temp = aux->getInfo();
                listaL = temp->getLicores();
                listaL->insertarL(lic);
                 system("cls");
                 basicas::gotoxy(35, 5); cout << "Quiere Ingresar otro Licor (S/N): ";
                 fflush(stdin);
                 cin.get(rpta);
             }while (!(rpta == 'N'));

        }
    }else{
        basicas::gotoxy(38, 5); cout << "NO HAY REGISTROS DE MARCAS - Opcion 1 ";
        basicas::gotoxy(38, 6); system("pause");
    }
}

void listaMarcas::registrarM(){
    char rpta;
    do{
        marca *marc = new marca();
        marc->leerMarca(this->contador);
        this->insertarMarca(marc);
        system("cls");
        basicas::gotoxy(35, 5); cout << "Quiere Ingresar otra Marca (S/N): ";
        fflush(stdin);
        cin.get(rpta);
    }while (!(rpta == 'N'));
}
