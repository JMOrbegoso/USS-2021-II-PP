#ifndef PERSONACLASS_H
#define PERSONACLASS_H

#include <iostream>
#include <windows.h>
#include <QDialog>

using namespace std;

class personaClass
{
private:
    string nombre;
    string apelli;
    string dniPer;
    int edaPer;
    bool genero;
public:
    personaClass();
    personaClass(string nombre, string apelli, string dniPer, int edaPer, bool genero);
    string getNombre() const;
    void setNombre(const string &value);
    string getApelli() const;
    void setApelli(const string &value);
    string getDniPer() const;
    void setDniPer(const string &value);
    int getEdaPer() const;
    void setEdaPer(int value);
    bool getGenero() const;
    void setGenero(bool value);
};

#endif // PERSONACLASS_H
