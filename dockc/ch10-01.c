#include <stdio.h>

int GetMin(int a, int b, int c, int d)
{
    int Min = a;
    if(b < Min) Min = b;
    if(c < Min) Min = c;
    if(d < Min) Min = d;

    return Min;
}

int main(void)
{
    int Min = GetMin(1, 2, 3, 4);

    printf("Min : %d\n", Min);
    return 0;
}