#include "contratista.h"

int Contratista::calcularSalario()
{
    return base - retencion;
}

void Contratista::mostrarInformacion()
{
    cout << "Empleado contratista: " << endl;
    cout << "nombre: " << this->nombre << endl;
    cout << "base: " << this->base << endl;
    cout << "identificacion: " << this->identificacion << endl;
    cout << "Numero de planilla: " << this->numeroPlanilla << endl;
    cout << "Retencion: " << this->retencion << endl;
    cout << "Numero de contrato: " << this->numeroContrato << endl;
    cout << "salario: " << this->calcularSalario() << endl;
}