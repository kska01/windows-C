#include <stdio.h>

int main(void)
{
    int height = 0;

    printf("키를 입력하세요. : ");
    scanf("%d", &height);

    printf("결과 : ");
    height >= 150 ? (puts("합격")) : (puts("불합격"));
    return 0; 
}