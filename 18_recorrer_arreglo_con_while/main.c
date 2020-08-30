#include <stdio.h>

int main()
{
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int tamanyo = sizeof(arreglo) / sizeof(int);
    int ix = 0;
    while (ix < tamanyo) {
        printf("%d\n", arreglo[ix]);
        ++ix;
    };

    return 0;
}
