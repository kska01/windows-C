#include <stdio.h>

int main(void)
{
    char ch = 'A';

    printf("%c\n", ch);
    putchar('\n');
    printf("%c\n", ch + 1);
    printf("%c\n", 'A' + 2);
    putchar('\n');
    printf("%d\n", 5.0 + 2);
    printf("%f\n", 5.0 + 2);
    return 0;
}