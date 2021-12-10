#include "listaclientesadqui.h"

nodoCliAd *listaClientesAdqui::getCab() const
{
    return cab;
}

void listaClientesAdqui::setCab(nodoCliAd *value)
{
    cab = value;
}

unsigned short listaClientesAdqui::getNClientesAdqui() const
{
    return nClientesAdqui;
}

void listaClientesAdqui::setNClientesAdqui(unsigned short value)
{
    nClientesAdqui = value;
}

listaClientesAdqui::listaClientesAdqui()
{
    this->cab = NULL;
    this->nClientesAdqui = 0;
}

listaClientesAdqui::~listaClientesAdqui()
{

}

void listaClientesAdqui::insertarClienteCompra(clienteAdqui *cli){
    nodoCliAd *aux = new (struct nodoCliAd);
    nodoCliAd *temp= new (struct nodoCliAd);
    temp->setCliAdqui(cli);
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
    this->nClientesAdqui++;
}

void listaClientesAdqui::clienteEspecifico(clienteAdqui *cli, int x){
    basicas::gotoxy(28, 6 + x); cout << "CODIGO: " << cli->getCodigo() << "  ---  DNI: " << cli->getDni() << "  ---  NOMBRE: " << cli->getName() << " " << cli->getApellido();
}

void listaClientesAdqui::encabezado(int x){
    basicas::gotoxy(35, 8 + x); cout << "~ LISTA DE PRODUCTOS DEL CLIENTE ~";
    basicas::gotoxy(10, 10 + x); cout << "CODIGO";
    basicas::gotoxy(30, 10 + x); cout << "NOMBRE";
    basicas::gotoxy(50, 10 + x); cout << "DESCRIPCION";
    basicas::gotoxy(70, 10 + x); cout << "PER-RESPONSABLE";
    basicas::gotoxy(90, 10 + x); cout << "PRECIO";
    basicas::gotoxy(10, 11 + x); cout << "______________________________________________________________________________________";
}

void listaClientesAdqui::mostrarClienteVentas(){
    nodoCliAd *aux = this->cab;
    nodoA *temp = NULL;
    int x = 0;
    while (aux != NULL){
        clienteEspecifico(aux->getCliAdqui(), x);
        temp = aux->getCliAdqui()->getLA()->getCab();
        encabezado(x);
        while (temp != NULL){
            temp->getAdquirido()->mostrarProductos(x);
            x++;
            temp = temp->getSgte();
        }
        x += 8;
        aux = aux->getSgte();
    }
    basicas::gotoxy(1, 15 + x); cout << system("pause");
}

void listaClientesAdqui::mostrarVentas(){
    system("cls");
    if (this->nClientesAdqui > 0){
        basicas::gotoxy(28, 3); cout << "* LISTA VENTAS REALIZADAS EN EL RESTAURANTE *";
        basicas::gotoxy(28, 4); cout << "=============================================";
        mostrarClienteVentas();
    }else{
        basicas::gotoxy(28, 5); cout << "~ NO HAY REGISTROS DE VENTAS -> Opcion N-4 ~";
        Sleep(1000);
        return;
    }
}
