#include "listaclientes.h"

nodoClientes *listaClientes::getCab() const
{
    return cab;
}

void listaClientes::setCab(nodoClientes *value)
{
    cab = value;
}

int listaClientes::getContador() const
{
    return contador;
}

void listaClientes::setContador(int value)
{
    contador = value;
}

listaClientes::listaClientes(){
    this->cab = NULL;
    this->contador = 0;
}

void listaClientes::insertarClientes(cliente *cli){
    nodoClientes *aux = new (struct nodoClientes);
    nodoClientes *temp = new (struct nodoClientes);
    temp->setInfo(cli);
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

void listaClientes::registrarC(){
    char rpta;
    do{
        cliente *cli = new cliente();
        cli->leerCliente(this->contador);
        this->insertarClientes(cli);
        system("cls");
        basicas::gotoxy(35, 5); cout << "Quiere Ingresar otro Clientes (S/N): ";
        fflush(stdin);
        cin.get(rpta);
    }while (!(rpta == 'N'));
}

void listaClientes::mostrarC(){
    if(this->contador > 0){
        nodoClientes *aux = this->cab;
        int x = 0;
        basicas::encabezadoTituloClientes();
        while(aux != NULL){
            basicas::gotoxy(10,6+x); cout << aux->getInfo()->getCodigo();
            basicas::gotoxy(20,6+x); cout << aux->getInfo()->getDni();
            basicas::gotoxy(30,6+x); cout << aux->getInfo()->getNombre();
            basicas::gotoxy(40,6+x); cout << aux->getInfo()->getApellido();
            basicas::gotoxy(50,6+x); cout << aux->getInfo()->getEdad();
            aux = aux->getSgte();
            x+=8;
        }
        basicas::gotoxy(30,9+x);system("pause");
    }else{
        basicas::gotoxy(38, 5); cout << "NO HAY REGISTROS DE CLIENTES - Opcion 3 ";
        basicas::gotoxy(38, 6);system("pause");
    }
}

void listaClientes::buscarC(){
    if(this->contador > 0){
        nodoClientes *aux = this->cab;
        string buscar;
        basicas::encabezadoBuscar();
        basicas::gotoxy(20, 5); buscar = basicas::leerTexto("Ingrese el DNI del Cliente que desea Buscar: ");
        while(aux != NULL){
            if (buscar == aux->getInfo()->getDni()){
                aux->getInfo()->mostrarResultado();
                break;
                return;
            aux = aux->getSgte();
            }else{
                basicas::gotoxy(38, 5); cout << "NO SE ENCONTRARON RESULTADOS DE BUSQUEDA";
                basicas::gotoxy(38, 6);system("pause");
            }
        }
    }else{
        basicas::gotoxy(38, 5); cout << "NO HAY REGISTROS DE CLIENTES - Opcion 3 ";
        basicas::gotoxy(38, 6);system("pause");
    }
}

nodoClientes *listaClientes::elegirCliente(nodoClientes *cabezaC){
    nodoClientes*aux = cabezaC;
    unsigned short x = 1, num;
    system("cls");
    basicas::gotoxy(30, 4); cout << "****************";
    basicas::gotoxy(30, 5); cout << "* LISTA CLIENTES *";
    basicas::gotoxy(30, 6); cout << "****************";
    while (aux != NULL){
        basicas::gotoxy(30, 8 + x); cout << x << " .- DNI: " << aux->getInfo()->getDni();
        aux = aux->getSgte();
        x++;
    }
    do{
        basicas::gotoxy(32, 9 + x); cout  << "Elija Cliente: ";
        cin >> num;
    }while (!(num > 0 && num <= x));
    aux = cabezaC;
    for (int y = 0; y < num - 1; y++){
        aux = aux->getSgte();
    }
    return aux;
}
