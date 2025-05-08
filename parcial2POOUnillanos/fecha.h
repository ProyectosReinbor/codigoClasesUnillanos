#ifndef Fecha_H
#define Fecha_H
#include <iostream>

using namespace std;
class Fecha
{
private:
    int day, month, year;

public:
    Fecha() : day(0), month(0), year(0) {}
    Fecha(int day, int month, int year) : day(day), month(month), year(year) {}

    void mostrar();
};
#endif