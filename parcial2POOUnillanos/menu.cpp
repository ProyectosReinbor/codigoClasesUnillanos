#include "menu.h"
#include "fecha.h"
#include "temporal.h"
#include "contratista.h"
#include "planta.h"
#include "practicante.h"
#include <iostream>
#include <string>

using namespace std;

void Menu::limpiarConsola()
{
    for (int i = 0; i < 15; i++)
    {
        cout << endl;
    }
}

void Menu::crearTemporal(string _nombre, int _base, long _identificacion)
{
    cout << "Escribe la Fecha" << endl;
    int day;
    cout << "Dia: ";
    cin >> day;
    int month;
    cout << "Mes: ";
    cin >> month;
    int year;
    cout << "Año: ";
    cin >> year;
    Fecha fecha(day, month, year);

    int salud;
    cout << "Salud: ";
    cin >> salud;
    int pension;
    cout << "Pension: ";
    cin >> pension;
    int liquidacion;
    cout << "Liquidacion: ";
    cin >> liquidacion;

    nomina.crearEmpleado(new Temporal(_nombre, _base, _identificacion, fecha, salud, pension, liquidacion));
}

void Menu::crearContratista(string _nombre, int _base, long _identificacion)
{
    cout << "Numero de planilla: ";
    string numeroPlanilla;
    cin >> numeroPlanilla;
    int retencion;
    cout << "Retencion: ";
    cin >> retencion;
    long numeroContrato;
    cout << "Numero de contrato: ";
    cin >> numeroContrato;

    nomina.crearEmpleado(new Contratista(_nombre, _base, _identificacion, numeroPlanilla, retencion, numeroContrato));
}

void Menu::crearPlanta(string _nombre, int _base, long _identificacion)
{
    int vacaciones;
    cout << "Vacaciones: ";
    cin >> vacaciones;
    int cesantias;
    cout << "Cesantias: ";
    cin >> cesantias;
    int salud;
    cout << "Salud: ";
    cin >> salud;
    int pension;
    cout << "Pension: ";
    cin >> pension;
    int transporte;
    cout << "Transporte: ";
    cin >> transporte;
    nomina.crearEmpleado(new Planta(_nombre, _base, _identificacion, vacaciones, cesantias, salud, pension, transporte));
}

void Menu::crearPracticante(string _nombre, int _base, long _identificacion)
{
    int salud;
    cout << "Salud: ";
    cin >> salud;
    nomina.crearEmpleado(new Practicante(_nombre, _base, _identificacion, salud));
}

void Menu::crearEmpleado()
{
    cout << "Crear empleado:" << endl;
    cout << "Nombre del empleado: ";
    string nombre;
    cin >> nombre;
    int base;
    long identificacion;
    cout << "Base: ";
    cin >> base;
    cout << "Identificacion: ";
    cin >> identificacion;
    cout << "Tipo de empleado (1 = temporal, 2 = contratista, 3 = planta, 4 = practicante): ";
    int tipo;
    cin >> tipo;
    switch (tipo)
    {
    case 1:
        this->crearTemporal(nombre, base, identificacion);
        break;
    case 2:
        this->crearContratista(nombre, base, identificacion);
        break;
    case 3:
        this->crearPlanta(nombre, base, identificacion);
        break;
    case 4:
        this->crearPracticante(nombre, base, identificacion);
        break;
    default:
        cout << "ERROR: tipo de empleado no valido" << endl;
        break;
    }
}

void Menu::eleminarEmpleado()
{
    cout << "Eliminar empleado:" << endl;
    cout << "Nombre del empleado: ";
    string nombre;
    cin >> nombre;
    cout << "Identificacion del empleado: ";
    long identificacion;
    cin >> identificacion;
    nomina.eliminarEmpleado(nombre, identificacion);
}

void Menu::mostrar()

{
    int opcion;
    do
    {
        cout << "- Menu -" << endl;
        cout << "1 -> Crear empleados" << endl;
        cout << "2 -> Eliminar empleados" << endl;
        cout << "3 -> Calcular el valor de todos los empleados sumados" << endl;
        cout << "4 -> Muestra la informacion de la organización y todos los empleados" << endl;
        cout << "5 -> Empleado del mes " << endl;
        cout << "6 -> Empleado mas costoso " << endl;
        cout << "Escriba el numero de la opcion (del 1 al 6): ";
        cin >> opcion;
        if (opcion < 1 || opcion > 6)
        {
            limpiarConsola();
            cout << "ERROR: opcion no valida" << endl
                 << endl;
        }
    } while (opcion < 1 || opcion > 6);

    switch (opcion)
    {
    case 1:
        this->crearEmpleado();
        break;

    case 2:
        this->eleminarEmpleado();
        break;

    case 3:
        nomina.calcularValor();
        break;

    case 4:
        nomina.organizacionMostrarInformacion();
        cout << endl;
        nomina.listarTodos();
        break;

    case 5:
        nomina.empleadoDelMes();
        break;

    case 6:
        nomina.empleadoMasCostoso();
        break;
    default:
        cout << "ERROR: opcion no encontrada" << endl;
        return;
    }
    this->mostrar();
    limpiarConsola();
}
