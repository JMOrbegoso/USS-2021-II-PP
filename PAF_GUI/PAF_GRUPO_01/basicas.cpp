#include "basicas.h"
#include <windows.h>

basicas::basicas()
{

}

basicas::~basicas()
{

}

void basicas::gotoxy(int x,int y){
     HANDLE hcon;
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y= y;
     SetConsoleCursorPosition(hcon,dwPos);
}

string basicas::leerCel(string mensaje){
    string valor;
    do {
        cout << mensaje;
        fflush(stdin);
        getline(cin, valor);
    }while(valor.length()!=9);
    return valor;
}
string basicas::leerDni(string mensaje){
    string valor;
    do {
        cout << mensaje;
        fflush(stdin);
        getline(cin, valor);
    }while(valor.length()!=8);
    return valor;
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

float basicas::leerFloat(string mensaje){
    float x;
    do{
        cout << mensaje;
        cin >> x;
    }while (!(x > 0));
    return x;
}

