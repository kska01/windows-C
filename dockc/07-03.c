#include <stdio.h>

int main(void)
{
    int i = 0, j = 1, result = 0;

    while(i < 10)
    {
        result += j;
        ++j;
        ++i;
    }

    printf("Total : %d\n", result);
    return 0;
}