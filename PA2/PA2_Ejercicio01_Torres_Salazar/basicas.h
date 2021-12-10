#ifndef BASICAS_H
#define BASICAS_H

#include <iostream>
#include <windows.h>

using namespace std;

class basicas
{
private:

public:
    basicas();
    ~basicas();
    static void gotoxy(int x,int y);
    static string leerTexto(string mensaje);
    static unsigned short leerEntero(string mensaje);
    static float leerFloat(string mensaje);
};

#endif // BASICAS_H
