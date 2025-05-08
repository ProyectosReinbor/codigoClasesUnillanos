#include <iostream>
#include "granja.h"
int main()
{
    // una granja avicola y porcina requiere almacenar todos sus cerdos y aves y calcular el valor comercial de estos que se calcula asi:
    // aves
    // valor = peso * 2.5 - (dias * 0.3);
    // es comercial despues de 45 dias
    // cerdos
    // valor = peso * 5.2 - (meses * 15) + 300
    // es comerciable despues de 10 meses
    // adicional almacenar su nombre y numero de identificacion
    // almacenar todos los ejemplares (aves y cerdos) en la misma estructura y calcular el valor de todos
    // se pueden quemar los datos
    // usar clase abstracta

    Granja *granja = new Granja();
    granja->agregarCerdo("stiven", 1011121314, 5.2, 10);
    granja->agregarCerdo("sebastian", 99887722, 4.2, 11);
    granja->agregarCerdo("roberto", 4455667711, 50.2, 9.99);
    granja->agregarCerdo("camilo", 9089492435, 4.8, 10.1);
    granja->agregarCerdo("rodrigo", 123445702, 10.2, 20);

    granja->agregarAve("julio", 1235483, 3.2, 45);
    granja->agregarAve("fernando", 38619438, 3.4, 50);
    granja->agregarAve("daniel", 8917934589, 2.9, 44.99);
    granja->agregarAve("harold", 189734327237, 3.1, 45.1);
    granja->agregarAve("arturo", 435858722, 7.9, 100);

    granja->calcularValoresComerciales();
    return 0;
}
