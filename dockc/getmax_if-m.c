#include <stdio.h>

int main(void)
{
    int a, b, c, max = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a > max) max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("%d\n", max);
    return 0;
}