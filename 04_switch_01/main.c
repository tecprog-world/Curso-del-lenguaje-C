#include <stdio.h>

int main()
{
    int x;
    x = 0;
    switch(x) {
    case 0: {
        int z;
        z = 8;
        printf("Caso 0\n");
        printf("%d\n", z);
    }
        break;
    case 1:
        printf("Caso 1\n");
        break;
    case 2:
        printf("Caso 2\n");
        break;
    case 3:
        printf("Caso 3");
        break;
    case 4: case 5:
        printf("Caso 4 y 5 estan combinados\n");
        break;
    default:
        printf("Caso por defecto\n");
        break;
    }

    return 0;
}
