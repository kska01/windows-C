#include <stdio.h>

int main(void)
{
    int i, j;

    for(i = 0; i < 5; ++i)
    {
        for(j = 0; j < 5 + i; ++j)
        {
            if((i + j) >= 4 && ((i + j) % 2) == 0)
            {
                printf("*\t");
            }
            else putchar('\t');
        }
        putchar('\n');
    }

    return 0;
}