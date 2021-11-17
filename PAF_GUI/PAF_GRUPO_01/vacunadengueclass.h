#ifndef VACUNADENGUECLASS_H
#define VACUNADENGUECLASS_H
#include <listalocalesclass.h>
#include <listaalmacenesclass.h>

class vacunaDengueClass{
private:
    listaLocalesClass *locales;
    listaAlmacenesClass *almacenes;
public:
    vacunaDengueClass();
    ~vacunaDengueClass();
    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);
    listaAlmacenesClass *getAlmacenes() const;
    void setAlmacenes(listaAlmacenesClass *value);
};

#endif // VACUNADENGUECLASS_H
