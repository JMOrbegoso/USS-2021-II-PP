#include <iostream>
#include <string>

#include "listas.h"

using namespace std;

string leerTexto(string mensaje) {
  string texto;
  cout << mensaje;
  fflush(stdin);
  getline(cin, texto);
  return texto;
}

void buscarLibroPorCodigo(listaS* rooms) {
  libroL* auxBook;
  string codeToFind;

  codeToFind = leerTexto("Ingrese el codigo del libro a buscar");

  auxBook = rooms->buscarLibroPorCodigo(codeToFind);

  if (auxBook == NULL) {
    cout << "No se encontró un libro con el codigo ingresado";
    cout << endl << endl;
    return;
  }

  cout << "Ese libro fue encontrado: " << codeToFind << endl;
  auxBook->getAutor();

  cout << endl << endl;
}

void editarLibro(listaS* rooms) {
  libroL* auxBook;
  string codeToFind, nuevoTitulo, nuevoAutor, nuevaFecha;

  codeToFind = leerTexto("Ingrese el codigo del libro a buscar");

  auxBook = rooms->buscarLibroPorCodigo(codeToFind);

  if (auxBook == NULL) {
    cout << "No se encontró un libro con el codigo ingresado";
    cout << endl << endl;
    return;
  }

  nuevoTitulo = leerTexto("Ingrese el nuevo titulo del libro");
  nuevoAutor = leerTexto("Ingrese el nuevo autor del libro");
  nuevaFecha = leerTexto("Ingrese la nueva fecha del libro");

  auxBook->setAutor(nuevoTitulo);
  auxBook->setTitulo(nuevoAutor);
  auxBook->setFecha(nuevaFecha);

  cout << endl << endl;
}

int main() {
  listaS* lS = new listaS();
  unsigned short opc;
  do {
    opc = lS->menu();
    switch (opc) {
      case 1:;
        break;
      case 2:;
        break;
      case 3:;
        break;
      case 4:;
        break;
      case 5:
        lS->registrarLibro();
        break;
      case 6:
        lS->mostrarLista();
        break;
      case 7:;
        buscarLibroPorCodigo(lS);
        break;
      case 8:;
        editarLibro(ls);
        break;
    }
  } while (!(opc == 6));
  return 0;
}
