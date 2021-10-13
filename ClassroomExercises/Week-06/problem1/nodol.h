#include "librol.h"
#ifndef NODOL_H
#define NODOL_H

class nodoL {
 private:
  libroL *info;
  nodoL *sgte;
  nodoL *ant;

 public:
  nodoL();
  ~nodoL();

  libroL *getInfo() const;
  void setInfo(libroL *value);
  nodoL *getSgte() const;
  void setSgte(nodoL *value);
  nodoL *getAnt() const;
  void setAnt(nodoL *value);
};

#endif  // NODOL_H
