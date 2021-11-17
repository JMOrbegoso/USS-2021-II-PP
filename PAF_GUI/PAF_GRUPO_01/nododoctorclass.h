#ifndef NODODOCTORCLASS_H
#define NODODOCTORCLASS_H
#include <doctorclass.h>

class nodoDoctorClass{
    doctorClass *doctor;
    nodoDoctorClass *sgte;
    nodoDoctorClass *ant;
public:
    nodoDoctorClass();
    ~nodoDoctorClass();
    doctorClass *getDoctor() const;
    void setDoctor(doctorClass *value);
    nodoDoctorClass *getSgte() const;
    void setSgte(nodoDoctorClass *value);
    nodoDoctorClass *getAnt() const;
    void setAnt(nodoDoctorClass *value);
};

#endif // NODODOCTORCLASS_H
