#ifndef Contratista_H
#define Contratista_H
#include <iostream>
#include "empleado.h"

class Contratista : public Empleado
{
private:
    string numeroPlanilla;
    int retencion;
    long numeroContrato;

public:
    Contratista(string _nombre, int _base, long _identificacion, string _numeroPlanilla, int _retencion, long _numeroContrato)
        : Empleado(_nombre, _base, _identificacion), numeroPlanilla(_numeroPlanilla), retencion(_retencion), numeroContrato(_numeroContrato)
    {
    }
    int calcularSalario();
    void mostrarInformacion();
};

#endif