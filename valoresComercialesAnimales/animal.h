#ifndef Animal_H
#define Animal_H
#include <iostream>
using namespace std;
class Animal
{
protected:
    float peso;
    string nombre;
    long identifiacion;

public:
    virtual ~Animal() {}
    Animal() : peso(0), nombre(""), identifiacion(0) {}
    Animal(string _nombre, long _identificacion, float _peso) : nombre(_nombre), identifiacion(_identificacion), peso(_peso) {}
    virtual void mostrarValorComercial() = 0;
};
#endif