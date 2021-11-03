#include <string>

#include "vacunaLoteClass.h"

using namespace std;

class vacunasLotesListaClass {
 private:
  vacunaLoteClass* cab;
  int max;
  int cantidad;
  void crecer(int crecerEn);

 public:
  ~vacunasLotesListaClass();
  vacunasLotesListaClass();

  int getMax();
  void setMax(int value);

  int getCantidad();
  void setCantidad(int value);

  vacunaLoteClass* getCab();
  void setCab(vacunaLoteClass* value);

  void mostrar(int fila);

  void insertar(vacunaLoteClass* nuevoAlmacen);

  vacunaLoteClass* elegirLoteDeVacuna(string mensaje);
};
