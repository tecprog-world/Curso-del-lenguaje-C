#include <stdio.h>

int main()
{
    int a, b;
    a = 45;
    b = 6;
    printf("OPERANDO TOMANDOLOS COMO ENTEROS");
    printf("Se tiene %d/%d, por lo que resolviendo obtenemos:\n", a, b);
    printf("Cociente: %d\n", a/b);
    printf("Residuo: %d\n", a % b);
    printf("\n");
    printf("**********************************************************");
    printf("OPERANDO TOMANDOLOS COMO REALES");
    printf("Se tiene %d/%d, por lo que resolviendo obtenemos:\n", a, b);
    printf("Cociente: %f\n", (double) a/ (double) b);
    printf("Residuo es 0 ya que es división exacta.\n");

    return 0;
}
