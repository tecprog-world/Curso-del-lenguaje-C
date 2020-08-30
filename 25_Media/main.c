#include <stdio.h>

int main()
{
    int i;
    float suma, r;
    float valores[10] = {
        1.0f, 5.0f, 34.6f, 6.8f, 8.94f, 6.5f, 3.2f, 1.0f, 2.0f, 3.0f
    };
    suma = 0.0f;
    for (i = 0; i < 10; ++i)
        suma = suma + valores[i];
    r = suma / 10;
    printf("Media: %f\n", r);
    return 0;
}
