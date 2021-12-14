#ifndef TRABAJADORCLASS_H
#define TRABAJADORCLASS_H
#include "personaclass.h"

class trabajadorClass : public personaClass
{
private:
    static int contador;
    string codigo;
    string accion; //La acción que realiza
public:
    trabajadorClass();
    trabajadorClass(string nombre, string apelli, string dniPer, int edaPer, bool genero, string accion);
    string getAccion() const;
    void setAccion(const string &value);
    string getCodigo() const;
};

#endif // TRABAJADORCLASS_H
