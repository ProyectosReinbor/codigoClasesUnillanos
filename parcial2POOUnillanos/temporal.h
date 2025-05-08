#ifndef Temporal_H
#define Temporal_H

#include <iostream>;
#include <vector>;
#include "empleado.h"
#include "fecha.h"

class Temporal : public Empleado
{
private:
    Fecha fechaFinalizacion;
    int salud;
    int pension;
    int liquidacion;

public:
    Temporal(string _nombre, int _base, long _identificacion, Fecha _fechaFinalizacion, int _salud, int _pension, int _liquidacion)
        : Empleado(_nombre, _base, _identificacion), fechaFinalizacion(_fechaFinalizacion), salud(_salud), pension(_pension), liquidacion(_liquidacion)
    {
    }

    int calcularSalario();
    void mostrarInformacion();
};

#endif