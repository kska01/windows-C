#include <stdio.h>

int main(void)
{
    int fee = 1000, age = 0;
    double rate = 0;

    printf("나이를 입력하세요 : ");
    scanf("%d", &age);

    if(age <= 3) rate = 0.0;
    else if(age <= 13) rate = 0.5;
    else if(age <= 19) rate = 0.75;
    else if(age < 65)  rate = 1.0;
    else rate = 0.0;

    printf("최종요금 : %d원\n", (int)(fee * rate));
    return 0;
}