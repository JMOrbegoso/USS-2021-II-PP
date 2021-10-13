#include "listas.h"

#include <windows.h>

int listaS::getCantS() const { return cantS; }

void listaS::setCantS(int value) { cantS = value; }

int listaS::getMaxS() const { return maxS; }

void listaS::setMaxS(int value) { maxS = value; }

salasS *listaS::getCabS() const { return cabS; }

void listaS::setCabS(salasS *value) { cabS = value; }
listaS::listaS() {}

listaS::~listaS() {}

salasS *listaS::elegirSala() {
  system("cls");
  int opc, x;
  gotoxy(17, 4);
  cout << "===================";
  gotoxy(17, 5);
  cout << "| LISTA DE SALAS |";
  gotoxy(17, 6);
  cout << "===================";
  for (x = 0; x < this->cabS; x++) {
    gotoxy(15, 8 + x);
    cout << x + 1 << ".- SALA: " << (this->cabS + x)->getCodigo();
  }
  do {
    gotoxy(18, 8 + 2 * x);
    cout << "Ingrese Opcion: ";
    cin >> opc;
  } while (!(opc > 0 && opc <= this->cabS));
  return (this->cabS + opc - 1);
}

void listaS::registrarLibro() {
  system("cls");
  if (this->cabS > 0) {
    salasS *aux = new salasS();
    aux = elegirSala();
    if (aux != NULL) {
      char rpta;
      do {
        libroL *libro = new libroL();
        libro->leerLibro();
        listaL *temp = new listaL();
        temp = aux->getLL();
        temp->insertarL(libro);
        aux->setLL(temp);
        system("cls");
        gotoxy(35, 5);
        cout << "Quiere Ingresar otro Cliente al Juego (S/N): ";
        fflush(stdin);
        cin.get(rpta);
      } while (!(rpta == 'N'));
    }
  } else {
    gotoxy(28, 5);
    cout << "NO HAY REGISTROS DE SALAS";
    return;
  }
}

void listaS::encabezado() {
  gotoxy(1, 11);
  cout << "TITULO";
  gotoxy(10, 11);
  cout << "AUTOR";
  gotoxy(25, 11);
  cout << "FECHA";
}

void listaS::mostrarListaL(int x) {
  system("cls");
  nodoL *aux;
  while (aux != NULL) {
    encabezado();
    gotoxy(1, 12 + x);
    cout << aux->getInfo()->getTitulo();
    gotoxy(10, 12 + x);
    cout << aux->getInfo()->getAutor();
    gotoxy(25, 12 + x);
    cout << aux->getInfo()->getFecha();
    aux = aux->getSgte();
    x++;
  }
}

void listaS::mostrarLista() {
  system("cls");
  if (this->cabS > 0) {
    for (int x = 0; x < this->cabS; x++) {
      gotoxy(1, 7 + x);
      cout << "CODIGO: " << (this->cabS + x)->getCodigo()
           << "TEMATICA: " << (this->cabS + x)->getTematica() << endl
           << endl;
      mostrarListaL(*(this->cabS + x), x);
    }
  } else {
    system("cls");
    gotoxy(30, 5);
    cout << "NO HAY REGISTRO DE SALAS - OPCION 1 " << endl << endl;
  }
  system("pause");
}

// Separador :) //

int listaS::menu() {
  system("cls");
  unsigned short opc;
  gotoxy(35, 4);
  cout << "*************************";
  gotoxy(35, 5);
  cout << "*BIBLIOTECA PONTE A LEER*";
  gotoxy(35, 6);
  cout << "*************************";
  gotoxy(30, 7);
  cout << "1. Registrar Salas";
  gotoxy(30, 8);
  cout << "2. Mostrar Lista de Salas";
  gotoxy(30, 9);
  cout << "3. Buscar Sala";
  gotoxy(30, 10);
  cout << "4. Editar Sala";
  gotoxy(30, 11);
  cout << "5. Registrar Libros";
  gotoxy(30, 12);
  cout << "6. Mostar Lista de  Libros";
  gotoxy(30, 13);
  cout << "7. Buscar Libros";
  gotoxy(30, 14);
  cout << "8. Editar Libro";
  gotoxy(30, 15);
  cout << "9. Salir ";
  do {
    gotoxy(31, 16);
    cout << "Ingrese Opcion: ";
    cin >> opc;
  } while (!(opc >= 1 && opc <= 7));
  return opc;
}

void listaS::gotoxy(int x, int y) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}

string listaS::leerTexto(string mensaje) {
  string texto;
  cout << mensaje;
  fflush(stdin);
  getline(cin, texto);
  return texto;
}
