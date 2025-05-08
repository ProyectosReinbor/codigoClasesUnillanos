#include "temporal.h"

int Temporal::calcularSalario()
{
    return base + salud + pension + liquidacion;
}

void Temporal::mostrarInformacion()
{
    cout << "Empleado temporal: " << endl;
    cout << "nombre: " << nombre << endl;
    cout << "base: " << base << endl;
    cout << "identificacion: " << identificacion << endl;
    cout << "salud: " << salud << endl;
    cout << "pension: " << pension << endl;
    cout << "liquidacion: " << liquidacion << endl;
    cout << "fecha de finalizacion: ";
    fechaFinalizacion.mostrar();
    cout << "salario: " << calcularSalario() << endl;
}