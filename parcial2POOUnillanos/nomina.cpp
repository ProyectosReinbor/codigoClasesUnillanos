#include "nomina.h"

void Nomina::calcularValor()
{
    int valor = 0;
    for (int i = 0; i < empleados.size(); i++)
    {
        valor += empleados[i]->calcularSalario();
    }
    cout << "Valor total: " << valor << endl;
}

void Nomina::crearEmpleado(Empleado *_empleado)
{
    this->empleados.push_back(_empleado);
}

void Nomina::eliminarEmpleado(string nombre, long identificacion)
{
    for (int i = 0; i < empleados.size(); i++)
    {
        if (empleados[i]->getIdentificacion() == identificacion &&
            empleados[i]->getNombre() == nombre)
        {
            delete empleados[i];
            empleados.erase(empleados.begin() + i);
            break;
        }
    }
}

void Nomina::listarTodos()
{
    if (this->empleados.size() == 0)
    {
        cout << "no hay empleados" << endl;
        return;
    }

    for (int i = 0; i < empleados.size(); i++)
    {
        empleados[i]->mostrarInformacion();
        cout << endl;
        cout << endl;
    }
}

void Nomina::organizacionMostrarInformacion()
{
    organizacion.mostarInformacion();
}

void Nomina::empleadoDelMes()
{
    if (this->empleados.size() == 0)
    {
        cout << "no hay empleados" << endl;
        return;
    }

    int random = rand() % empleados.size();
    Empleado *empleado = empleados[random];
    cout << "El empleado del mes es: " << endl;
    empleado->mostrarInformacion();
}

void Nomina::empleadoMasCostoso()
{
    if (this->empleados.size() == 0)
    {
        cout << "no hay empleados" << endl;
        return;
    }

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
