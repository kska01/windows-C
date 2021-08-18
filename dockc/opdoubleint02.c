#include <stdio.h>

int main(void)
{
    int x = 10;

    printf("%d\n", x * 10);
    printf("%d\n", x * 10.0);
    putchar('\n');
    printf("%d\n", x / 10);
    putchar('\n');
    printf("%d\n", 5 / 2);
    printf("%f\n", 5 / 2);
    putchar('\n');
    printf("%f\n", 5.0 / 2);
    return 0;
}