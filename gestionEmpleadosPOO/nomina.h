#ifndef Nomina_H
#define Nomina_H

#include <iostream>;
#include <vector>;
#include "empleado.h"
#include "organizacion.h"

using namespace std;

class Nomina
{
private:
    vector<Empleado *> empleados;
    Organizacion organizacion;

public:
    Nomina() {}
    Nomina(Organizacion _organizacion) : organizacion(_organizacion) {}

    int calcularValor();
    void crearEmpleado(Empleado *_empleado);
    void eliminarEmpleado(long identificacion);
    void listarTodos();
    void empleadoDelMes();
    void empleadoMasCostoso();
};

#endif