#include <string>
#include <almacenclass.h>

#ifndef ALMACENESLISTACLASS_H
#define ALMACENESLISTACLASS_H

using namespace std;

class almacenesListaClass {
 private:
  almacenClass* cab;
  int max;
  int cantidad;
  void crecer(int crecerEn);

 public:
  ~almacenesListaClass();
  almacenesListaClass();

  int getMax();
  void setMax(int value);

  int getCantidad();
  void setCantidad(int value);

  almacenClass* getCab();
  void setCab(almacenClass* value);

  void insertar(almacenClass* nuevoAlmacen);
};


#endif // ALMACENESLISTACLASS_H

