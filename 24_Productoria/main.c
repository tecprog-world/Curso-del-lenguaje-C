#include <stdio.h>

int main()
{
    int i, producto;
    producto = 1;
    for (i = 1; i <= 5; ++i)
        producto *= i;
    printf("Productoria: %d\n", producto);
    return 0;
}
