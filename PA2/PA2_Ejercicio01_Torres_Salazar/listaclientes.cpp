#include "listaclientes.h"

nodoCli *listaClientes::getCab() const
{
    return cab;
}

void listaClientes::setCab(nodoCli *value)
{
    cab = value;
}

unsigned short listaClientes::getNClientes() const
{
    return nClientes;
}

void listaClientes::setNClientes(unsigned short value)
{
    nClientes = value;
}

listaClientes::listaClientes()
{
    this->cab = NULL;
    this->nClientes = 0;
}

listaClientes::~listaClientes()
{

}

void listaClientes::insertarCliente(cliente *cli){
    nodoCli *aux = new (struct nodoCli);
    nodoCli *temp= new (struct nodoCli);
    temp->setClient(cli);
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
    this->nClientes++;
}

void listaClientes::registrarClienteRestaurante(){
    cliente *cli = new cliente();
    cli->leerCliente(this->nClientes);
    this->insertarCliente(cli);
    system("cls");
    basicas::gotoxy(30, 10); cout << "~ CLIENTE REGISTRADO CORRECTAMENTE ~";
    Sleep(1500);
}

nodoCli *listaClientes::elegirCliente(){
    nodoCli *aux = this->cab;
    unsigned short x = 1, num;
    system("cls");
    basicas::gotoxy(35, 4); cout << "=====================";
    basicas::gotoxy(35, 5); cout << "| LISTA DE CLIENTES |";
    basicas::gotoxy(35, 6); cout << "=====================";
    while (aux != NULL){
        basicas::gotoxy(30, 8 + x); cout << "[" << x << "]" << " .- CLIENTE: " << aux->getClient()->getNombres() << " " << aux->getClient()->getApellidos() << ".";
        aux = aux->getSgte();
        x++;
    }
    do{
        basicas::gotoxy(32, 9 + x); cout  << "-> Elija un Cliente: ";
        cin >> num;
    }while (!(num > 0 && num <= x));
    aux = this->cab;
    for (int y = 0; y < num - 1; y++){
        aux = aux->getSgte();
    }
    return aux;
}
