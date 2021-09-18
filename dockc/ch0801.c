#include <stdio.h>

int main(void)
{
    int num[5] = {0};
    int i, max = 0, min;

    for(i = 0; i < 5; ++i)
    {
        scanf("%d", &num[i]);
    }
    
    min = num[0];
    
    for(i = 0; i < 5; ++i)
    {
        if(num[i] > max) max = num[i];
        else if (num[i] < min) min = num[i];
    }

    printf("MIN : %d, MAX : %d\n", min, max);
    return 0;
}