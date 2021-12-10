#include "listacategorias.h"

nodoC *listaCategorias::getCab() const
{
    return cab;
}

void listaCategorias::setCab(nodoC *value)
{
    cab = value;
}

unsigned short listaCategorias::getNCategorias() const
{
    return nCategorias;
}

void listaCategorias::setNCategorias(unsigned short value)
{
    nCategorias = value;
}

listaCategorias::listaCategorias()
{
    this->cab = NULL;
    this->nCategorias = 0;
}

listaCategorias::~listaCategorias()
{

}

void listaCategorias::insertarCategoria(categoria *cat){
    nodoC *aux = new (struct nodoC);
    nodoC *temp= new (struct nodoC);
    temp->setCatego(cat);
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
    this->nCategorias++;
}

void listaCategorias::registrarCat(){
    categoria *cat = new categoria();
    cat->leerCategoria(this->nCategorias);
    this->insertarCategoria(cat);
    system("cls");
    basicas::gotoxy(30, 10); cout << "~ CATEGORIA REGISTRADA CORRECTAMENTE ~";
    Sleep(1500);
}

nodoC *listaCategorias::elegirCategoria(nodoC *cabezaC){
    nodoC *aux = cabezaC;
    unsigned short x = 1, num;
    system("cls");
    basicas::gotoxy(35, 4); cout << "====================";
    basicas::gotoxy(35, 5); cout << "| LISTA CATEGORIAS |";
    basicas::gotoxy(35, 6); cout << "====================";
    while (aux != NULL){
        basicas::gotoxy(30, 8 + x); cout << "[" << x << "]" << " .- Nombre: " << aux->getCatego()->getNombre();
        aux = aux->getSgte();
        x++;
    }
    do{
        basicas::gotoxy(32, 9 + x); cout  << "-> Elija una Categoria: ";
        cin >> num;
    }while (!(num > 0 && num <= x));
    aux = cabezaC;
    for (int y = 0; y < num - 1; y++){
        aux = aux->getSgte();
    }
    return aux;
}

void listaCategorias::registrarPorductoCategoria(){
    system("cls");
    if (this->nCategorias > 0){
        nodoC *aux = new nodoC;
        categoria *aux2 = new categoria();
        aux = this->elegirCategoria(this->cab);
        aux2 = aux->getCatego();
        if (aux2 != NULL){
            char rpta;
            do{
                producto *pro= new producto();
                pro->leerProducto(aux2->getLP()->getNProductos());
                listaProductos *temp = new listaProductos();
                temp = aux2->getLP();
                temp->insertarProducto(pro);
                aux2->setLP(temp);
                system("cls");
                basicas::gotoxy(30, 10); cout << "~ PRODUCTO REGISTRADO CORRECTAMENTE ~";
                Sleep(1500);
                system("cls");
                basicas::gotoxy(35, 5); cout << "Quiere Ingresar otro Producto a la Categoria (S/N): ";
                fflush(stdin);
                cin.get(rpta);
            }while(!(rpta == 'N'));
        }
    }else{
        basicas::gotoxy(28, 10); cout << "~ NO HAY REGISTROS DE CATEGORIAS -> Opcion N-1 ~";
        Sleep(1500);
        return;
    }
}

nodoC *listaCategorias::elegirCategoria(){
    nodoC *aux = this->cab;
    unsigned short x = 1, num;
    system("cls");
    basicas::gotoxy(35, 4); cout << "=======================";
    basicas::gotoxy(35, 5); cout << "| LISTA DE CATEGORIAS |";
    basicas::gotoxy(35, 6); cout << "=======================";
    while (aux != NULL){
        basicas::gotoxy(30, 8 + x); cout << "[" << x << "]" << " .- Nombre: " << aux->getCatego()->getNombre();
        aux = aux->getSgte();
        x++;
    }
    do{
        basicas::gotoxy(32, 9 + x); cout  << "-> Elija una Categoria: ";
        cin >> num;
    }while (!(num > 0 && num <= x));
    aux = this->cab;
    for (int y = 0; y < num - 1; y++){
        aux = aux->getSgte();
    }
    return aux;
}
