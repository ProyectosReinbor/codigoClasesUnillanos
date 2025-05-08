#include "nomina.h"

int Nomina::calcularValor()
{
    int valor = 0;
    for (auto empleado : empleados)
    {
        valor += empleado->calcularSalario();
    }
    cout << "valor total: " << valor << endl;
}

void Nomina::crearEmpleado(Empleado *_empleado)
{
    this->empleados.push_back(_empleado);
}

void Nomina::eliminarEmpleado(long identificacion)
{
    for (int i = 0; i < empleados.size(); i++)
    {
        if (empleados[i]->getIdentificacion() == identificacion)
        {
            delete empleados[i];
            empleados.erase(empleados.begin() + i);
            break;
        }
    }
}

void Nomina::listarTodos()
{
    for (int i = 0; i < empleados.size(); i++)
    {
        empleados[i]->mostrarInformacion();
        cout << endl;
        cout << endl;
    }
}

void Nomina::empleadoDelMes()
{
    int random = rand() % empleados.size();
    Empleado *empleado = empleados[random];
    cout << "El empleado del mes es: " << endl;
    empleado->mostrarInformacion();
}

void Nomina::empleadoMasCostoso()
{
    int mayorSalario = 0;
    Empleado *empleadoMasCostoso;
    for (auto empleado : empleados)
    {
        int salario = empleado->calcularSalario();
        if (salario > mayorSalario)
        {
            mayorSalario = salario;
            empleadoMasCostoso = empleado;
        }
    }
    empleadoMasCostoso->mostrarInformacion();
}