#ifndef VACUNATONCONTRADENGUECLASS_H
#define VACUNATONCONTRADENGUECLASS_H
#include <listalocalesclass.h>
#include <almacenclass.h>

class vacunatonContraDengueClass{
private:
    string encargado;
    string fechaInicio;
    string fechaFinal;
    listaLocalesClass *locales;
    almacenClass *almacenGeneral;
public:
    vacunatonContraDengueClass();
    ~vacunatonContraDengueClass();
    string getEncargado() const;
    void setEncargado(const string &value);
    string getFechaInicio() const;
    void setFechaInicio(const string &value);
    string getFechaFinal() const;
    void setFechaFinal(const string &value);
    listaLocalesClass *getLocales() const;
    void setLocales(listaLocalesClass *value);
    almacenClass *getAlmacenGeneral() const;
    void setAlmacenGeneral(almacenClass *value);
};

#endif // VACUNATONCONTRADENGUECLASS_H
