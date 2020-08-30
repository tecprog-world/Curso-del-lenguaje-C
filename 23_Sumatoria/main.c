#include <stdio.h>

int main(void)
{
    int i, suma;
    suma = 0;
    for (i = 0; i <= 1000; ++i)
        suma += i;
    printf("Sumatoria: %d\n", suma);
    return 0;
}
