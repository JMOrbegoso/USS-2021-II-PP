#include "empresabackus.h"

listaMarcas *empresaBackus::getMarcas() const
{
    return marcas;
}

void empresaBackus::setMarcas(listaMarcas *value)
{
    marcas = value;
}

listaClientes *empresaBackus::getClientes() const
{
    return clientes;
}

void empresaBackus::setClientes(listaClientes *value)
{
    clientes = value;
}

listaCompras *empresaBackus::getCompras() const
{
    return compras;
}

void empresaBackus::setCompras(listaCompras *value)
{
    compras = value;
}

empresaBackus::empresaBackus(){
    this->marcas = new listaMarcas();
    this->clientes = new listaClientes();
    this->compras = new listaCompras();
}

// Separador :) //

void empresaBackus::mostrarVentas(){
    system("cls");
    if(this->compras->getContador() > 0){
        this->compras->mostrarV();
    }else{
        basicas::gotoxy(38, 5); cout << "NO HAY REGISTROS DE VENTAS - Opcion 4 ";
        basicas::gotoxy(38, 6);system("pause");
    }
}

void empresaBackus::mostrarLicores(){
    system("cls");
    if(this->marcas->getContador() > 0){
        this->marcas->mostrarL();
    }else{
        basicas::gotoxy(38, 5); cout << "NO HAY REGISTROS DE MARCAS - Opcion 1 ";
        basicas::gotoxy(38, 6);system("pause");
    }
}

void empresaBackus::buscarCliente(){
    system("cls");
    if(this->marcas->getContador() > 0){
        this->clientes->buscarC();
    }else{
        basicas::gotoxy(38, 5); cout << "NO HAY REGISTROS DE MARCAS - Opcion 1 ";
        basicas::gotoxy(38, 6);system("pause");
    }
}

void empresaBackus::mostrarClientes(){
    system("cls");
    if(this->marcas->getContador() > 0){
        this->clientes->mostrarC();
    }else{
        basicas::gotoxy(38, 5); cout << "NO HAY REGISTROS DE MARCAS - Opcion 1 ";
        basicas::gotoxy(38, 6); system("pause");
    }
}

void empresaBackus::pasarCompra(cliente *clie, licor *lic){
    compra *com = new compra();
    productoComprado *produ = new productoComprado();
    com->setCodigo(clie->getCodigo());
    com->setDni(clie->getDni());
    com->setNombre(clie->getNombre());
    com->setApellido(clie->getApellido());
    produ->setNombre(lic->getNombre());
    produ->setTipo(lic->getTipo());
    produ->setPrecio(lic->getPrecio());
    this->compras->insertarCompra(com);
    this->compras->getCab()->getInfo()->getLicores()->insertarLicor(produ);
}

void empresaBackus::venderLicor(){
    system("cls");
    if (this->marcas->getContador() > 0){
        if(this->marcas->getCab()->getInfo()->getLicores()->getContador() > 0){
            if(this->clientes->getContador() > 0){
                nodoClientes *aux = new nodoClientes();
                cliente *clie = new cliente();
                aux = this->clientes->elegirCliente(this->clientes->getCab());
                clie = aux->getInfo();
                while(aux != NULL){
                    nodoMarcas *aux2 = new nodoMarcas();
                    marca *marc = new marca();
                    aux2 = this->marcas->elegirMarca(this->marcas->getCab());
                    marc = aux2->getInfo();
                    while(marc != NULL){
                        nodoLicores *aux3 = new nodoLicores();
                        licor *lic = new licor();
                        aux3 = this->marcas->getCab()->getInfo()->getLicores()->elegirLicor(marc->getLicores()->getCab());
                        lic = aux3->getInfo();
                        this->pasarCompra(clie,lic);
                        return;
                    }
                }
            }else{
                basicas::gotoxy(38, 5); cout << "NO HAY REGISTRO DE CLIENTES - OPCION 03 ";
                basicas::gotoxy(38, 6);system("pause");
            }
        }else{
            basicas::gotoxy(38, 5); cout << "NO HAY REGISTRO DE TIPOS DE LICORES - OPCION 02 ";
            basicas::gotoxy(38, 6);system("pause");
        }
    }else{
        basicas::gotoxy(38, 5); cout << "NO HAY REGISTRO DE MARCAS - OPCION 01 ";
        basicas::gotoxy(38, 6);system("pause");
    }
}

void empresaBackus::registrarLicores(){
    system("cls");
    this->marcas->registrarL();
}

void empresaBackus::registrarMarcas(){
    system("cls");
    this->marcas->registrarM();
}

void empresaBackus::registrarCliente(){
    system("cls");
    if(this->marcas->getContador() > 0){
        this->clientes->registrarC();
    }else{
        basicas::gotoxy(38, 5); cout << "NO HAY REGISTROS DE MARCAS - Opcion 1 ";
        basicas::gotoxy(38, 6);system("pause");
    }
}

// Separador :) //

int empresaBackus::menu(){
    unsigned short opc;
    system("cls");
    basicas::gotoxy(35, 2  ); cout << "******************************";
    basicas::gotoxy(35, 3  ); cout << "* EMPRESA BACKUS: TOMEN AGUA *";
    basicas::gotoxy(35, 4  ); cout << "******************************";
    basicas::gotoxy(30, 6  ); cout << "1. Registrar las Marcas de Licores";
    basicas::gotoxy(30, 7  ); cout << "2. Registrar el Tipo de Licor";
    basicas::gotoxy(30, 8  ); cout << "3. Registrar Cliente";
    basicas::gotoxy(30, 9  ); cout << "4. Venta de Licor";
    basicas::gotoxy(30, 10); cout << "5. Mostrar Clientes Registrados";
    basicas::gotoxy(30, 11); cout << "6. Mostrar Venta de Licores";
    basicas::gotoxy(30, 12); cout << "7. Buscar Cliente";
    basicas::gotoxy(30, 13); cout << "8. Mostrar la Lista de Licores por Categoria";
    basicas::gotoxy(30, 14); cout << "9. Salir";
    do{
        basicas::gotoxy(31, 15); cout << "Ingrese Opcion: ";
        cin >> opc;
    }while (!(opc >= 1 && opc <= 9));
    return opc;
}
