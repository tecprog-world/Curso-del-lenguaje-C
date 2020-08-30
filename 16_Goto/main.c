#include <stdio.h>

int main()
{
    printf("Hola 1\n");
    goto hola3;
    printf("Hola 2\n");
hola3:
    printf("Hola 3\n");
    printf("Hola 4\n");
    printf("Hola 5\n");
    goto hola7;
    printf("Hola 6\n");
hola7:
    printf("Hola 7\n");
    return 0;
}
