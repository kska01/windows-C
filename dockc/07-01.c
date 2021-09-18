#include <stdio.h>

int main(void)
{
    int input = 0;

    scanf("%d", &input);
    if (input < 1) input = 1;
    if (input > 9) input = 9;

    while (input-- != 0)
    {
        putchar('*');
    }
    
    putchar('\n');
    return 0;
}