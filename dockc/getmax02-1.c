#include <stdio.h>

int main(void)
{
    int nMax = 0;
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    nMax = a > b ? a : (b > c ? b : c);
    
    printf("MAX : %d\n", nMax);
    return 0;
}