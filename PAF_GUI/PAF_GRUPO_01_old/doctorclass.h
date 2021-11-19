#ifndef DOCTORCLASS_H
#define DOCTORCLASS_H
#include <personaclass.h>

class doctorClass : public personaClass{
private:
    float sueldo;
    string horasTrabajo;
public:
    doctorClass();
    ~doctorClass();
    float getSueldo() const;
    void setSueldo(float value);
    string getHorasTrabajo() const;
    void setHorasTrabajo(const string &value);
};

#endif // DOCTORCLASS_H
