#ifndef Ave_h
#define Ave_h
#include <iostream>
#include "animal.h"
using namespace std;
class Ave : public Animal
{
    int diasParaComercializar;
    int dias;

public:
    Ave() : Animal(), dias(0), diasParaComercializar(45) {}
    Ave(string _nombre, long _identificacion, float _peso, int _dias) : Animal(_nombre, _identificacion, _peso), dias(_dias), diasParaComercializar(45) {}

    void mostrarValorComercial() override;
};
#endif