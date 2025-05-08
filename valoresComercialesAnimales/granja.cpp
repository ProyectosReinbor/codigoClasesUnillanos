#include "granja.h"
void Granja::agregarCerdo(string _nombre, long _identificacion, float _peso, int _meses)
{
    animales.push_back(new Cerdo(_nombre, _identificacion, _peso, _meses));
}
void Granja::agregarAve(string _nombre, long _identificacion, float _peso, int _dias)
{
    animales.push_back(new Ave(_nombre, _identificacion, _peso, _dias));
}

void Granja::calcularValoresComerciales()
{
    cout << "Granja:" << endl;
    cout << "valores comerciales:" << endl;
    for (auto &animal : animales)
    {
        animal->mostrarValorComercial();
    }
}