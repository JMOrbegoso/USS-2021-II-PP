#include <iostream>
#ifndef SALASS_H
#define SALASS_H
#include "listal.h"

using namespace std;

class salasS {
 private:
  static int contador;
  string codigo;
  string tematica;
  listaL *lL;

 public:
  salasS();
  ~salasS();
  string getCodigo() const;
  void setCodigo(const string &value);
  string getTematica() const;
  void setTematica(const string &value);
  listaL *getLL() const;
  void setLL(listaL *value);
};

#endif  // SALASS_H
