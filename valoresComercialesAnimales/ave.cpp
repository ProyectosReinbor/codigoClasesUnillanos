#include "ave.h"

void Ave::mostrarValorComercial()
{
    cout << endl;
    cout << nombre << " - " << identifiacion << endl;
    if (dias >= diasParaComercializar)
    {
        float valor = peso * 2.5 - (dias * 0.3);
        cout << "valor comercial: " << valor << endl;
    }
    else
    {
        cout << "No ha alcanzado los " << diasParaComercializar << " dias para comercializar" << endl;
    }
    cout << endl;
}