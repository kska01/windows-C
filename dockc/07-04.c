#include <stdio.h>

int main(void)
{
    int i = 1, input = 0;

    scanf("%d", &input);
    if(input < 2 || input > 9) 
    {
        printf("ERROR\n");
        return 0;
    }

    while(i < 10)
    {
        printf("%d * %d = %d\n", input, i, input * i);
        ++i;
    }
    
    return 0;
}