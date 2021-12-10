#include "cliente.h"

int cliente::contador = 1;

string cliente::getCodigo() const
{
    return codigo;
}

void cliente::setCodigo(const string &value)
{
    codigo = value;
}

string cliente::getNombres() const
{
    return nombres;
}

void cliente::setNombres(const string &value)
{
    nombres = value;
}

string cliente::getApellidos() const
{
    return apellidos;
}

void cliente::setApellidos(const string &value)
{
    apellidos = value;
}

string cliente::getDni() const
{
    return dni;
}

void cliente::setDni(const string &value)
{
    dni = value;
}

unsigned short cliente::getEdad() const
{
    return edad;
}

void cliente::setEdad(unsigned short value)
{
    edad = value;
}

cliente::cliente()
{
    this->codigo = "Cli-" + to_string(cliente::contador);
    cliente::contador++;
    this->edad = 0;
}

cliente::cliente(string nombres, string apellidos, string dni, unsigned short edad)
{
    this->dni = dni;
    this->edad = edad;
    this->nombres = nombres;
    this->apellidos = apellidos;
}

cliente::~cliente()
{

}

void cliente::leerCliente(unsigned short x){
    system("cls");
    basicas::gotoxy(34, 4); cout << "=============================";
    basicas::gotoxy(34, 5); cout << "| REGISTRO DE CLIENTE N - " << x + 1 << " |";
    basicas::gotoxy(34, 6); cout << "=============================";
    basicas::gotoxy(30, 8); cout << "Codigo del Cliente: "<< this->codigo;
    basicas::gotoxy(30, 9); this->nombres = basicas::leerTexto("Ingrese Nombre del Cliente: ");
    basicas::gotoxy(30, 10); this->apellidos = basicas::leerTexto("Ingrese Apellidos del Cliente: ");
    basicas::gotoxy(30, 11); this->dni = basicas::leerTexto("Ingrese DNI del Cliente: ");
    basicas::gotoxy(30, 12); this->edad = basicas::leerEntero("Ingrese Edad del Cliente: ");
}
