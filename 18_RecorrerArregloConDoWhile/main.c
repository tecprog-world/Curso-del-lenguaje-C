#include <stdio.h>

int main()
{
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int tamanyo = sizeof(arreglo) / sizeof(int);
    int ix = 0;
    do {
        printf("%d\n", arreglo[ix]);
        ++ix;
    }
    while (ix < tamanyo);
    return 0;
}
