#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 5;
    int l = 0;

    for(i; i < 5; ++i)
    {
        for(j = 0; j < k - 1; ++j)
        {
            printf("\t");
        }
        for(j =0; j <= l; ++j)
        {
            printf("*\t");
        }
        putchar('\n');
        --k;
        l += 2;
    }
    return 0;
}