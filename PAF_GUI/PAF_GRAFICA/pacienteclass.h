#ifndef PACIENTECLASS_H
#define PACIENTECLASS_H
#include <personaclass.h>

class pacienteClass : public personaClass{
private:
    string enfermedad;
public:
    pacienteClass();
    ~pacienteClass();
    string getEnfermedad() const;
    void setEnfermedad(const string &value);
};

#endif // PACIENTECLASS_H
