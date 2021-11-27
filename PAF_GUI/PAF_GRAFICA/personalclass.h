#ifndef PERSONALCLASS_H
#define PERSONALCLASS_H
#include <personaclass.h>

class personalClass : public personaClass{
private:
    float sueldo;
    string horasTrabajo;
    bool tipoPersonal;
public:
    personalClass(string nombre, string apellido, string dni, string telefono, string direccion, int edad, float sueldo, string horasTrabajo, bool tipoPersonal);
    personalClass();
    ~personalClass();
    float getSueldo() const;
    void setSueldo(float value);
    string getHorasTrabajo() const;
    void setHorasTrabajo(const string &value);
    bool getTipoPersonal() const;
    void setTipoPersonal(bool value);
};

#endif // PERSONALCLASS_H
