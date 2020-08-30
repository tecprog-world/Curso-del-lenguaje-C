#include <stdio.h>

int main()
{
    int i, j, n, a[100];
    n = 15;
    i = 0;
    while (n > 0) {
        a[i] = n % 2;
        n /= 2;
        ++i;
    }
    for (j = i - 1; j >= 0; --j)
        printf("%d",a[j]);
    printf("\n");
    return 0;
}
