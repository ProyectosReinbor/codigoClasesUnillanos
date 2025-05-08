#include <iostream>;
#include "nomina.h"
#include "organizacion.h"
#include "menu.h"

using namespace std;

int main()
{
    Organizacion organizacion("WETY", 1);
    Nomina nomina(organizacion);
    Menu menu(nomina);
    return 0;
}