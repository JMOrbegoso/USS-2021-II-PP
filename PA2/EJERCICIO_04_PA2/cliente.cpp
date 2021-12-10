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

string cliente::getNombre() const
{
    return nombre;
}

void cliente::setNombre(const string &value)
{
    nombre = value;
}

string cliente::getApellido() const
{
    return apellido;
}

void cliente::setApellido(const string &value)
{
    apellido = value;
}

string cliente::getDni() const
{
    return dni;
}

void cliente::setDni(const string &value)
{
    dni = value;
}

int cliente::getEdad() const
{
    return edad;
}

void cliente::setEdad(int value)
{
    edad = value;
}

cliente::cliente(){
    this->codigo = "Cli-" + to_string(cliente::contador);
    cliente::contador++;
    this->edad = 0;
}

cliente::cliente(string nombre, string apellido, string dni, int edad){
    this->nombre = nombre;
    this->apellido = apellido;
    this->dni = dni;
    this->edad = edad;
}

void cliente::leerCliente(int x){
    system("cls");
    basicas::gotoxy(35,2); cout << "*****************************";
    basicas::gotoxy(35,3); cout << "* REGISTRAR EL CLIENTE N-" << x+1 << " *";
    basicas::gotoxy(35,4); cout << "*****************************";
    basicas::gotoxy(30,5); this->dni = basicas::leerDni("Ingrese el DNI del Cliente: ");
    basicas::gotoxy(30,6); this->nombre = basicas::leerTexto("Ingrese el Nombre del Cliente: ");
    basicas::gotoxy(30,7); this->apellido = basicas::leerTexto("Ingrese el Apellido del Cliente: ");
    basicas::gotoxy(30,8); this->edad = basicas::leerEdad("Ingrese la Edad del Cliente: ");
    x++;
    system("cls");
    basicas::gotoxy(35,10); cout << "|*CLIENTE REGISTRADO*|";
    basicas::gotoxy(35,11); cout << " ******************** ";
    basicas::gotoxy(35,12);system("pause");
}

void cliente::mostrarResultado(){
    system("cls");
    basicas::gotoxy(35,2); cout << "*****************";
    basicas::gotoxy(35,3); cout << "* CLIENTE " << this->getCodigo() << " *";
    basicas::gotoxy(35,4); cout << "*****************";
    basicas::gotoxy(30,5); cout << "DNI: " << this->dni;
    basicas::gotoxy(30,6); cout << "NOMBRE: " << this->nombre;
    basicas::gotoxy(30,7); cout << "APELLIDO: " << this->apellido;
    basicas::gotoxy(30,8); cout << "EDAD: " << this->edad;
    basicas::gotoxy(30,9); system("pause");
}
