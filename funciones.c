#include <stdio.h>
#include "funciones.h"

void calcular_ahorros(double inversion_mensual, double tasa_interes_anual, int meses) {
    double tasa_interes_mensual = tasa_interes_anual / 1200;
    double total_ahorrado_mes = 0;
    double interes_ganado_mes = 0;
    double interes_total_ganado = 0;


    printf("Mes\tTotal monto ahorrado\tInteres ganado\n");


    for (int i = 1; i <= meses; i++) {

        interes_ganado_mes = (total_ahorrado_mes + inversion_mensual) * tasa_interes_mensual;


        total_ahorrado_mes = total_ahorrado_mes + inversion_mensual + interes_ganado_mes;


        interes_total_ganado += interes_ganado_mes;


        printf("%d\t%.2f\t\t\t%.2f\n", i, total_ahorrado_mes, interes_ganado_mes);
    }


    printf("\nMonto total ahorrado: $%.2f\n", total_ahorrado_mes);
    printf("Interes ganado: $%.2f\n", interes_total_ganado);


    printf("Monto total invertido: $%.2f\n", inversion_mensual * meses);


    printf("Monto total ahorrado e invertido: $%.2f\n", total_ahorrado_mes + inversion_mensual * meses);
} 
