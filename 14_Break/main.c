#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 100; ++i) {
        printf("%d ", i);
        if (i == 50)
            break;
    }
    printf("\n");
    return 0;
}
