#include <stdio.h>
#include "funciones.h"

int main() {
    double inversion_mensual, tasa_interes_anual;
    int meses;


    printf("Monto mensual a invertir: ");
    scanf("%lf", &inversion_mensual);

    printf("Ingresa la tasa de interes anual: (en %%): ");
    scanf("%lf", &tasa_interes_anual);

    printf("Ingresa los meses: ");
    scanf("%d", &meses);


    calcular_ahorros(inversion_mensual, tasa_interes_anual, meses);

    return 0;
}