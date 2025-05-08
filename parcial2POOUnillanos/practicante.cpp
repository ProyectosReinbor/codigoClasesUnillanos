#include "practicante.h"

int Practicante::calcularSalario()
{
    return base - (base * 0.1) + salud;
}

void Practicante::mostrarInformacion()
{
    cout << "Empleado practicante: " << endl;
    cout << "nombre: " << this->nombre << endl;
    cout << "base: " << this->base << endl;
    cout << "identificacion: " << this->identificacion << endl;
    cout << "salud: " << this->salud << endl;
    cout << "salario: " << this->calcularSalario() << endl;
}