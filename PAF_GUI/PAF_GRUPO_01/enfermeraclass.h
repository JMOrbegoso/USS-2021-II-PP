#ifndef ENFERMERACLASS_H
#define ENFERMERACLASS_H
#include <personaclass.h>

class enfermeraClass : public personaClass{
private:
    static int codigo;
    float sueldo;
    string horasTrabajo;
public:
    enfermeraClass();
    ~enfermeraClass();
    float getSueldo() const;
    void setSueldo(float value);
    string getHorasTrabajo() const;
    void setHorasTrabajo(const string &value);
};

#endif // ENFERMERACLASS_H
