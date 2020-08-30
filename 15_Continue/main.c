#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 100; ++i) {
        if (i == 10 || i == 45)
            continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
