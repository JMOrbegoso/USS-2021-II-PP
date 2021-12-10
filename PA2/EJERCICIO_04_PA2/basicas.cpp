#include "basicas.h"

basicas::basicas(){

}

void basicas::gotoxy(int x,int y){
     HANDLE hcon;
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y= y;
     SetConsoleCursorPosition(hcon,dwPos);
}

string basicas::leerTexto(string mensaje){
    string texto;
    cout << mensaje;
    fflush(stdin);
    getline(cin, texto);
    return texto;
}

unsigned short basicas::leerEntero(string mensaje){
    unsigned short x;
    do{
        cout << mensaje;
        cin >> x;
    }while (!(x > 0));
    return x;
}
unsigned short basicas::leerEdad(string mensaje){
    unsigned short x;
    do{
        gotoxy(30,8); cout << mensaje;
        cin >> x;
    }while (!(x > 17));
    return x;
}

float basicas::leerMoneda(string mensaje){
    float x;
    do{
        cout << mensaje;
        cin >> x;
    }while (!(x > 0));
    return x;
}

string basicas::leerDni(string mensaje){
    string valor;
    do {
        gotoxy(30,5); cout << mensaje;
        fflush(stdin);
        getline(cin, valor);
    }while(valor.length()!=8);
    return valor;
}

void basicas::encabezadoTituloClientes(){
    gotoxy(20, 2); cout << "*******************************";
    gotoxy(20, 3); cout << "*LISTA DE CLIENTES REGISTRADOS*";
    gotoxy(20, 4); cout << "*******************************";
    gotoxy(10, 5); cout << "CODIGO";
    gotoxy(20, 5); cout << "DNI";
    gotoxy(30, 5); cout << "NOMBRE";
    gotoxy(40, 5); cout << "APELLIDO";
    gotoxy(50, 5); cout << "EDAD";
}

void basicas::encabezadoBuscar(){
    gotoxy(35, 2); cout << "*******************************";
    gotoxy(35, 3); cout << "*BUSCAR UN CLIENTE REGISTRADO*";
    gotoxy(35, 4); cout << "*******************************";
}

void basicas::encabezadoMostrarLicores(){
    gotoxy(5, 2); cout << "****************************";
    gotoxy(5, 3); cout << "*LISTA DE MARCAS DE LICORES*";
    gotoxy(5, 4); cout << "****************************";
}

void basicas::encabezadoMostrarVentas(){
    gotoxy(5, 2); cout << "****************************";
    gotoxy(5, 3); cout << "*LISTA DE VENTAS DE LA EMPRESA*";
    gotoxy(5, 4); cout << "****************************";
}

void basicas::encabezadoTituloLicores(int x){
    gotoxy(1, 6+x); cout << "*TIPO DE LICOR*";
    gotoxy(20, 6+x); cout << "PRECIO*";
}

void basicas::encabezadoLicoresVendidos(int x){
    gotoxy(1, 6+x  ); cout << "CODIGO";
    gotoxy(10, 6+x); cout << "NOMBRE";
    gotoxy(20, 6+x); cout << "TIPO";
    gotoxy(30, 6+x); cout << "PRECIO";
}
