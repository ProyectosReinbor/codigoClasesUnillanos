#ifndef Granja_H
#define Granja_H
#include <vector>
#include "cerdo.h"
#include "ave.h"
class Granja
{
    vector<Animal *> animales;

public:
    Granja() {}

    void agregarCerdo(string _nombre, long _identificacion, float _peso, int _meses);

    void agregarAve(string _nombre, long _identificacion, float _peso, int _dias);

    void calcularValorCerdos();

    void calcularValorAves();

    void calcularValoresComerciales();
};
#endif