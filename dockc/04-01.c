#include <stdio.h>

int main(void)
{
    double a = 0, b = 0;

    printf("두 정수를 입력하세요. : ");
    scanf("%lf %lf", &a, &b);
    printf("AVG : %.2f\n", (a + b) / 2);
    return 0;
}