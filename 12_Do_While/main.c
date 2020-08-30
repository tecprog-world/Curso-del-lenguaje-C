#include <stdio.h>

int main()
{
    int cuenta = 0;
    int numero_de_veces = 3;
    do {
        printf("Hola, ¿cómo estas?\n");
        ++cuenta;
    } while (cuenta != numero_de_veces);

    return 0;
}
