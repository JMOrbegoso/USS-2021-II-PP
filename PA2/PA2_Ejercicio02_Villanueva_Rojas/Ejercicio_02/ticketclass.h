#ifndef TICKETCLASS_H
#define TICKETCLASS_H

#include "butacaclass.h"
#include "trabajadorclass.h"
#include "zonaclass.h"

class ticketClass
{
private:
    static int contador;
    string codigo;
    butacaClass *butaca;
    trabajadorClass *trabaj;
    string nombreF;
    string fecha;
    double precio;
public:
    ticketClass();
    ticketClass(butacaClass *butaca, trabajadorClass *trabaj, string nombreF, string fecha, double precio);
    butacaClass *getButaca() const;
    void setButaca(butacaClass *value);
    trabajadorClass *getTrabaj() const;
    void setTrabaj(trabajadorClass *value);
    string getNombreF() const;
    void setNombreF(const string &value);
    string getFecha() const;
    void setFecha(const string &value);
    double getPrecio() const;
    void setPrecio(double value);
    string getCodigo() const;
};

#endif // TICKETCLASS_H
