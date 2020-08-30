#include <stdio.h>

int main()
{
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int tamanyo = sizeof(arreglo) / sizeof(int);
    int ix;
    for (ix = 0; ix < tamanyo; ++ix) {
         printf("%d\n", arreglo[ix]);
}
    return 0;
}
