#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;

    for(i; i < 5; ++i)
    {
        for(j = 0; j <= i; ++j)
        {
            printf("* ");
        }
        putchar('\n');
    }
    return 0;
}