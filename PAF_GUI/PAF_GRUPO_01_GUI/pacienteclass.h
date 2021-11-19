#ifndef PACIENTECLASS_H
#define PACIENTECLASS_H
#include <personaclass.h>

class pacienteClass : public personaClass{
private:
    static int codigo;
    string enfermedadCronica;
public:
    pacienteClass();
    ~pacienteClass();
    string getEnfermedadCronica() const;
    void setEnfermedadCronica(const string &value);
};

#endif // PACIENTECLASS_H
