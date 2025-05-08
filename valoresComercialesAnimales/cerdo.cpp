#include "cerdo.h"
#include <iostream>
using namespace std;
void Cerdo::mostrarValorComercial()
{
    cout << endl;
    cout << nombre << " - " << identifiacion << endl;
    if (meses >= mesesParaComercializar)
    {
        float valor = peso * 5.2 - (meses * 15) + 300;
        cout << "valor comercial:" << valor << endl;
    }
    else
    {
        cout << "No ha alcanzado los " << mesesParaComercializar << " meses para comercializar" << endl;
    }
    cout << endl;
}