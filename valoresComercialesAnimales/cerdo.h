#ifndef Cerdo_H
#define Cerdo_H
#include "animal.h"
class Cerdo : public Animal
{
    int meses;
    int mesesParaComercializar;

public:
    Cerdo() : Animal(), meses(0), mesesParaComercializar(10) {}
    Cerdo(string _nombre, long _identificacion, float _peso, int _meses) : Animal(_nombre, _identificacion, _peso), meses(_meses), mesesParaComercializar(10) {}

    void mostrarValorComercial() override;
};
#endif