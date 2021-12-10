#include <iostream>
#ifndef BASICAS_H
#define BASICAS_H
#include <windows.h>

using namespace std;

class basicas
{
public:
    basicas();
    static void gotoxy(int x, int y);
    static string leerTexto(string mensaje);
    static unsigned short leerEntero(string mensaje);
    static float leerMoneda(string mensaje);
    static void encabezadoTituloClientes();
    static string leerDni(string mensaje);
    static unsigned short leerEdad(string mensaje);
    static void encabezadoBuscar();
    static void encabezadoMostrarLicores();
    static void encabezadoTituloLicores(int x);
    static void encabezadoMostrarVentas();
    static void encabezadoLicoresVendidos(int x);
};

#endif // BASICAS_H
