#include <stdio.h>

int main(void)
{
    int i, n = 0, Total = 0;

    for(i = 1; i <= 100; ++i)
    {
        if(i % 4 == 0)
        {
            n++;
            Total += i;
        }
    }

    printf("4의 배수 : %d개\n", n);
    printf("총 합    : %d\n", Total);
    return 0;
}