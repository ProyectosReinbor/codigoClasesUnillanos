#include "planta.h"

int Planta::calcularSalario()
{
    return cesantias + (vacaciones * (base / 30)) + salud + pension + transporte;
}

void Planta::mostrarInformacion()
{
    cout << "Empleado planta: " << endl;
    cout << "nombre: " << this->nombre << endl;
    cout << "base: " << this->base << endl;
    cout << "identificacion: " << this->identificacion << endl;
    cout << "vacaciones: " << this->vacaciones << endl;
    cout << "cesantias: " << this->cesantias << endl;
    cout << "salud: " << this->salud << endl;
    cout << "pension: " << this->pension << endl;
    cout << "transporte: " << this->transporte << endl;
    cout << "salario: " << this->calcularSalario() << endl;
}