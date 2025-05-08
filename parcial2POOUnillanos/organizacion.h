#ifndef Organizacion_H
#define Organizacion_H
#include <iostream>

using namespace std;

class Organizacion
{
private:
    string nombre;
    int nit;

public:
    Organizacion() : nombre(""), nit(0) {}
    Organizacion(string _nombre, int _nit) : nombre(_nombre), nit(_nit) {}

    void mostarInformacion()
    {
        cout << "nombre: " << nombre << endl;
        cout << "nit: " << nit << endl;
    }
};
#endif
