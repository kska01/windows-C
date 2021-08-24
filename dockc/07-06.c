#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 5;

    for(i; i < 5; ++i)
    {
        for(j = 0; j < k - 1; ++j)
        {
            printf("\t");
        }
        for(j =0; j <= i; ++j)
        {
            printf("*\t");
        }
        putchar('\n');
        --k;
    }
    return 0;
}