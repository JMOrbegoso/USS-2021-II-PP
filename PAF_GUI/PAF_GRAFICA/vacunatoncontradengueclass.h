#ifndef VACUNATONCONTRADENGUECLASS_H
#define VACUNATONCONTRADENGUECLASS_H
#include <listalocalesclass.h>
#include <almacengeneralclass.h>

class vacunatonContraDengueClass{
private:
    string encargado;
    string fechaInicio;
    string fechaFinal;
    listaLocalesClass *locales;
    almacenGeneralClass *almaGeneral;
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
    almacenGeneralClass *getAlmaGeneral() const;
    void setAlmaGeneral(almacenGeneralClass *value);
};

#endif // VACUNATONCONTRADENGUECLASS_H
