#include <stdio.h>

int main(void)
{
    int nResult = 0, nData = 10;

    nResult += 3;
    printf("%d\n", nResult);
    putchar('\n');

    nResult *= nData;
    printf("%d\n", nResult);
    putchar('\n');

    nResult /= 2;
    printf("%d\n", nResult);
    putchar('\n');

    nResult -= nData - 5;
    printf("%d\n", nResult);
    putchar('\n');

    nResult %= 3;
    printf("%d\n", nResult);
    return 0;
}