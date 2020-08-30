#include <stdio.h>

int main()
{
    int i;
    i = 0;
    do {
        printf("%d ", i);
        if (i == 50)
            break;
        ++i;
    } while (i < 100);
    printf("\n");
    return 0;
}
