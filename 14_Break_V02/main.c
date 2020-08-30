#include <stdio.h>

int main()
{
    int i;
    i = 0;
    while (i < 100) {
        printf("%d ", i);
        if (i == 50)
            break;
        ++i;
    }
    printf("\n");
    return 0;
}
