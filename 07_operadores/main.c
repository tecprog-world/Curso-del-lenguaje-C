#include <stdio.h>

int main()
{
    double x1 = 6.;
    double x2 = 7;
    printf("OPERADORES ARITMETICOS\n");
    printf("Se ha de dividir x1/x2,\n");
    printf("donde x1 y x2 son %.2f y %.2f respectivamente\n", x1, x2);
    printf("Teniendo como resultado %.4f\n", x1/x2);
    printf("******************");
    printf("\n");
    printf("COMPARACIONES BOOLEANAS\n");
    printf("Ejemplo 01:\n");
    int x3 = 6;
    int x4 = 7;
    if (x4 == x3+1) {
        printf("x4 vale %d y x3 vale %d \n", x4, x3);
        printf("Por lo tanto x4 = x3 + 1 es verdadero\n");
    } else {
        printf("Es que x4 = x3 + 1\n");
    }
    printf("Ejemplo 02:\n");
    if (x4 != x3) {
        printf("x4 es diferente de x3\n");
    } else {
        printf("x4 es igual a x3\n");
    }
    printf("OPERADORES LOGICOS DE COMPARACION\n");
    int x5 = 10;
    int x6 = 12;
    printf("> Prueba 1:\n");
    if (!(x5 && x6)) {
        printf("Verdadero\n");
    } else {
        printf("Falso\n");
    }
    printf("> Prueba 2:\n");
    if (x3 <= x4 || x5 <= x6) {
        printf("Verdadero\n");
    } else {
        printf("Falso\n");
    }

    return 0;
}
