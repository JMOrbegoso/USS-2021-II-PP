#include "restaurante.h"

listaCategorias *restaurante::getLC() const
{
    return lC;
}

void restaurante::setLC(listaCategorias *value)
{
    lC = value;
}

listaClientes *restaurante::getLClientes() const
{
    return lClientes;
}

void restaurante::setLClientes(listaClientes *value)
{
    lClientes = value;
}

listaClientesAdqui *restaurante::getLCliAdqui() const
{
    return lCliAdqui;
}

void restaurante::setLCliAdqui(listaClientesAdqui *value)
{
    lCliAdqui = value;
}

restaurante::restaurante()
{
    this->lC = new listaCategorias();
    this->lClientes = new listaClientes();
    this->lCliAdqui = new listaClientesAdqui();
}

restaurante::~restaurante()
{

}

int restaurante::menuOpciones(){
    unsigned short op1;
    system("cls");
    basicas::gotoxy(34, 4); cout << "====================";
    basicas::gotoxy(34, 5); cout << "| MENU DE OPCIONES |";
    basicas::gotoxy(34, 6); cout << "====================";
    basicas::gotoxy(30, 8); cout << "[1]. Registrar Categoria";
    basicas::gotoxy(30, 9); cout << "[2]. Registrar Producto en Categoria";
    basicas::gotoxy(30, 10); cout << "[3]. Registrar Cliente";
    basicas::gotoxy(30, 11); cout << "[4]. Vender Productos a un Cliente";
    basicas::gotoxy(30, 12); cout << "[5]. Reporte de Ventas";
    basicas::gotoxy(30, 13); cout << "[6]. Buscar Cliente";
    basicas::gotoxy(30, 14); cout << "[7]. Salir del Programa";
    do{
        basicas::gotoxy(32, 16); cout << "-> Ingrese una Opcion: ";
        cin >> op1;
    }while (!(op1 >= 1 && op1 <= 7));
    return op1;
}

void restaurante::registrarCategoria(){
    this->lC->registrarCat();
}

void restaurante::registrarProducto(){
    this->lC->registrarPorductoCategoria();
}

void restaurante::registrarCliente(){
    this->lClientes->registrarClienteRestaurante();
}


void restaurante::pasarDatosCompra(cliente *aux2, producto *pro2){
    clienteAdqui *cli = new clienteAdqui();
    adquisicion *adqui = new adquisicion();
    cli->setCodigo(aux2->getCodigo());
    cli->setDni(aux2->getDni());
    cli->setName(aux2->getNombres());
    cli->setApellido(aux2->getApellidos());

    adqui->setNombre(pro2->getNombre());
    adqui->setDescripcion(pro2->getDescripcion());
    adqui->setCodigo(pro2->getCodigo());
    adqui->setPrecioA(pro2->getPrecio());
    adqui->setPersonaRes(pro2->getNameResponsable());

    this->lCliAdqui->insertarClienteCompra(cli);
    this->lCliAdqui->getCab()->getCliAdqui()->getLA()->insertarAdquisicion(adqui);
}

void restaurante::venderProductoCliente(){
    system("cls");
    char rpta;
    if (this->lC->getNCategorias() > 0){
        if (this->lC->getCab()->getCatego()->getLP()->getNProductos() > 0){
            if (this->lClientes->getNClientes() > 0){
                nodoCli *aux = new nodoCli();
                cliente *aux2 = new cliente();
                aux = this->lClientes->elegirCliente();
                aux2 = aux->getClient();
                do{
                while (aux2 != NULL){
                    nodoC *temp = new nodoC();
                    categoria *temp2 = new categoria();
                    temp = this->lC->elegirCategoria();
                    temp2 = temp->getCatego();
                    while (temp2 != NULL){
                        nodoP *pro = new nodoP();
                        producto *pro2 = new producto();
                        pro = this->lC->getCab()->getCatego()->getLP()->elegirProducto(temp2->getLP()->getCab());
                        pro2 = pro->getProduct();
                        this->pasarDatosCompra(aux2, pro2);
                        return;
                    }
                }
                system("cls");
                basicas::gotoxy(30, 10); cout << "~ PRODUCTO ADQUIRIDO CORRECTAMENTE ~";
                Sleep(1000);
                system("cls");
                basicas::gotoxy(35, 5); cout << "Desea Adquirir otro Producto (S/N): ";
                fflush(stdin);
                cin.get(rpta);
                }while (!(rpta == 'N'));
            }else{
                basicas::gotoxy(28, 10); cout << "~ NO HAY CLIENTES REGISTRADOS -> Opcion N-3 ~";
                Sleep(1000);
                return;
            }
        }else{
            basicas::gotoxy(28, 10); cout << "~ NO HAY PRODUCTOS REGISTRADOS -> Opcion N-2 ~";
            Sleep(1000);
            return;
        }
    }else{
        basicas::gotoxy(28, 10); cout << "~ NO HAY REGISTROS DE CATEGORIAS -> Opcion N-1 ~";
        Sleep(1000);
        return;
    }
}

void restaurante::listarVentasRestaurante(){
    this->lCliAdqui->mostrarVentas();
}
