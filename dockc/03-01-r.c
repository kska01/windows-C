#include <stdio.h>

int main(void)
{
    char name[30] = {0};
    int age = 0;

    printf("나이를 입력하세요. : ");
    scanf("%d", &age);
    getchar();
    printf("이름을 입력하세요. : ");
    gets(name);

    printf("당신의 나이는 %d살이고 이름은 '%s'입니다.", age, name);
    return 0;
}