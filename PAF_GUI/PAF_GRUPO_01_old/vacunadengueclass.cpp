#include "vacunadengueclass.h"


listaLocalesClass *vacunaDengueClass::getLocales() const
{
    return locales;
}

void vacunaDengueClass::setLocales(listaLocalesClass *value)
{
    locales = value;
}

listaAlmacenesClass *vacunaDengueClass::getAlmacenes() const
{
    return almacenes;
}

void vacunaDengueClass::setAlmacenes(listaAlmacenesClass *value)
{
    almacenes = value;
}
vacunaDengueClass::vacunaDengueClass(){
    
}

vacunaDengueClass::~vacunaDengueClass()
{
    
}

