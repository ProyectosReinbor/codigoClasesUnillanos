#ifndef Planta_H
#define Planta_H
#include "empleado.h"

class Planta : public Empleado
{
private:
    int vacaciones;
    int cesantias;
    int salud;
    int pension;
    int transporte;

public:
    Planta() : Empleado() {}
    Planta(string _nombre, int _base, long _identificacion, int _vacaciones, int _cesantias, int _salud, int _pension, int _transporte)
        : Empleado(_nombre, _base, _identificacion), vacaciones(_vacaciones), cesantias(_cesantias), salud(_salud), pension(_pension), transporte(_transporte) {}
    int calcularSalario();
    void mostrarInformacion();
};

#endif