#include "ticketclass.h"

int ticketClass::contador = 1;

butacaClass *ticketClass::getButaca() const
{
    return butaca;
}

void ticketClass::setButaca(butacaClass *value)
{
    butaca = value;
}

trabajadorClass *ticketClass::getTrabaj() const
{
    return trabaj;
}

void ticketClass::setTrabaj(trabajadorClass *value)
{
    trabaj = value;
}

string ticketClass::getNombreF() const
{
    return nombreF;
}

void ticketClass::setNombreF(const string &value)
{
    nombreF = value;
}

string ticketClass::getFecha() const
{
    return fecha;
}

void ticketClass::setFecha(const string &value)
{
    fecha = value;
}

double ticketClass::getPrecio() const
{
    return precio;
}

void ticketClass::setPrecio(double value)
{
    precio = value;
}

string ticketClass::getCodigo() const
{
    return codigo;
}

ticketClass::ticketClass()
{
    
}

ticketClass::ticketClass(butacaClass *butaca, trabajadorClass *trabaj, string nombreF, string fecha, double precio)
{
    codigo = "TIK-" + to_string(ticketClass::contador);
    ticketClass::contador++;
    this->butaca = butaca;
    this->trabaj = trabaj;
    this->nombreF = nombreF;
    this->fecha = fecha;
    this->precio = precio;
}
