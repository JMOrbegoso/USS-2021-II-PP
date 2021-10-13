#include "librol.h"

string libroL::getCodigo() const { return codigo; }

void libroL::setCodigo(const string &value) { codigo = value; }

string libroL::getTitulo() const { return titulo; }

void libroL::setTitulo(const string &value) { titulo = value; }

string libroL::getAutor() const { return autor; }

void libroL::setAutor(const string &value) { autor = value; }

string libroL::getFecha() const { return fecha; }

void libroL::setFecha(const string &value) { fecha = value; }
libroL::libroL() {}

libroL::~libroL() {}

void libroL::leerLibro() {
  system("cls");
  gotoxy(35, 2);
  cout << "**********************";
  gotoxy(35, 3);
  cout << "* REGISTRAR LIBRO *";
  gotoxy(35, 4);
  cout << "**********************";
  gotoxy(30, 5);
  titulo = this->leerTexto("Ingrese el Titulo del Libro: ");
  gotoxy(30, 6);
  autor = this->leerTexto("Ingrese los Autor del Libro: ");
  gotoxy(30, 7);
  fecha = this->leerEntero("Ingrese el Año de la Publicacion: ");
}

float libroL::leerFloat(string mensaje) {
  float x;
  do {
    cout << mensaje;
    cin >> x;
  } while (!(x > 0));
  return x;
}

int libroL::leerEntero(string mensaje) {
  unsigned short x;
  do {
    cout << mensaje;
    cin >> x;
  } while (!(x > 0));
  return x;
}

string libroL::leerTexto(string mensaje) {
  string texto;
  cout << mensaje;
  fflush(stdin);
  getline(cin, texto);
  return texto;
}
