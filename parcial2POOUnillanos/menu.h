#ifndef Menu_H
#define Menu_H
#include <iostream>
#include "nomina.h"
#include "organizacion.h"
using namespace std;

class Menu
{
private:
    Nomina nomina;
    static void limpiarConsola();

    void crearTemporal(string _nombre, int _base, long _identificacion);
    void crearContratista(string _nombre, int _base, long _identificacion);
    void crearPlanta(string _nombre, int _base, long _identificacion);
    void crearPracticante(string _nombre, int _base, long _identificacion);
    void crearEmpleado();
    void eleminarEmpleado();

public:
    void mostrar();

    Menu(string _nombre, int _nit)
    {
        nomina = Nomina(_nombre, _nit);
        mostrar();
    }
};
#endif
