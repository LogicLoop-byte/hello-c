#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", i, i, i * i);
    }
    return 0;
}