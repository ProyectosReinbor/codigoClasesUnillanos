#ifndef Empleado_H
#define Empleado_H
#include <iostream>;

using namespace std;
class Empleado
{
protected:
    string nombre;
    int base;
    long identificacion;

public:
    virtual ~Empleado() {}
    Empleado() : nombre(""), base(0), identificacion(0) {}
    Empleado(string _nombre, int _base, long _identificacion)
        : nombre(_nombre), base(_base), identificacion(_identificacion)
    {
    }
    virtual int calcularSalario() = 0;
    virtual void mostrarInformacion() = 0;

    long getIdentificacion();
};

#endif