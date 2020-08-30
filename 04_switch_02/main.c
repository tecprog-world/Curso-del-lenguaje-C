#include <stdio.h>

int main()
{
    char x;
    x = 'a';
    switch(x) {
    case 'a': {
        int z;
        z = 8;
        printf("Caso a\n");
        printf("%d\n", z);
    }
        break;
    case 'b':
        printf("Caso b\n");
        break;
    case 'c':
        printf("Caso c\n");
        break;
    case 'd':
        printf("Caso d");
        break;
    case 'e': case 'f':
        printf("Caso e y f estan combinados\n");
        break;
    default:
        printf("Caso por defecto\n");
        break;
    }

    return 0;
}
