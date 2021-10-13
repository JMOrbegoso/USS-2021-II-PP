#include "nodol.h"
#ifndef LISTAL_H
#define LISTAL_H

class listaL {
 private:
  nodoL *cabL;
  int cantL;

 public:
  listaL();
  ~listaL();

  nodoL *getCabL() const;
  void setCabL(nodoL *value);
  int getCantL() const;
  void setCantL(int value);
  void insertarL(libroL *libro);
};

#endif  // LISTAL_H
