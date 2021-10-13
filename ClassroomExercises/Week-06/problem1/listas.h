#include "salass.h"
#ifndef LISTAS_H
#define LISTAS_H

class listaS {
 private:
  int cantS;
  int maxS;
  salasS *cabS;

 public:
  listaS();
  ~listaS();
  int getCantS() const;
  void setCantS(int value);
  int getMaxS() const;
  void setMaxS(int value);
  salasS *getCabS() const;
  void setCabS(salasS *value);
  int menu();
  void gotoxy(int x, int y);
  string leerTexto(string mensaje);
  void registrarLibro();
  salasS *elegirSala();
  void mostrarLista();
  void mostrarListaL();
  void encabezado();
};

#endif  // LISTAS_H
