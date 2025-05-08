#ifndef Practicante_H
#define Practicante_H
#include "empleado.h"

class Practicante : public Empleado
{
private:
    int salud;

public:
    Practicante(string _nombre, int _base, long _identificacion, int _salud)
        : Empleado(_nombre, _base, _identificacion), salud(_salud)
    {
    }
    int calcularSalario();
    void mostrarInformacion();
};

#endif