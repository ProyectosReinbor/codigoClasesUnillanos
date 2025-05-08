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
    Nomina(string _nombre, int _nit)
    {
        organizacion = Organizacion(_nombre, _nit);
    }

    void calcularValor();
    void crearEmpleado(Empleado *_empleado);
    void eliminarEmpleado(string nombre, long identificacion);
    void listarTodos();
    void organizacionMostrarInformacion();
    void empleadoDelMes();
    void empleadoMasCostoso();
};

#endif
