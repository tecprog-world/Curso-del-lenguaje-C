#include <stdio.h>

int main()
{
    int i, j, es;
    for (i = 2; i < 100; ++i) {
        es = 1;
        for (j = 2; j < i; ++j) {
            if (i % j == 0) {
                es = 0;
            }
        }
        if (es) {
            printf("%d ", i);
        }
    }
    return 0;
}
