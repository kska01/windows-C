#include <stdio.h>

int main(void)
{
    int input = 0, max = 0, adjustedvalue = 0;

    printf("0부터 100사이의 값 다섯개를 입력하시오 : ");
    scanf("%d", &input);

    if(input >= 0 && input <= 100)
    {
        if(input > max) max = input;
        scanf("%d", &input);
        if(input < 0 || input > 100) goto error;
        if(input > max) max = input;
        scanf("%d", &input);
        if(input < 0 || input > 100) goto error;
        if(input > max) max = input;
        scanf("%d", &input);
        if(input < 0 || input > 100) goto error;
        if(input > max) max = input;
        scanf("%d", &input);
        if(input < 0 || input > 100) goto error;
        if(input > max) max = input;
    }
    else
    {
        error:
        if(input < 0)   adjustedvalue = 0;
        if(input > 100) adjustedvalue = 100;
        printf("%d은(는) 범위를 벗어난 값입니다. 조정값 : %d\n", input, adjustedvalue);
    }

    printf("최대값 : %d\n", max);
    return 0;
}