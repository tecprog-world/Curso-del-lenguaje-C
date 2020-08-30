#include <stdio.h>

int main()
{
    int x = 4;
    int y = 3;
    int h = 10;
    int j = 11;
    if (x > y) {
        printf("%d es mayor que %d | VERDADERO\n", x, y);
        if (h < j) {
            printf("%d es menor que %d | VERDADERO", h, j);
        } else {
            printf("%d es menor que %d | FALSO", h, j);
        }
    } else {
        printf("%d es mayor que %d | FALSO\n", x, y);
    }
}
