#ifndef PERSONALCLASS_H
#define PERSONALCLASS_H
#include <personaclass.h>


class personalClass : public personaClass{
private:
    float suel;
    string horasTrab;
    bool tipoPersl;
public:
    personalClass();
    ~personalClass();
    float getSuel() const;
    void setSuel(float value);
    string getHorasTrab() const;
    void setHorasTrab(const string &value);
    bool getTipoPersl() const;
    void setTipoPersl(bool value);
};

#endif // PERSONALCLASS_H
