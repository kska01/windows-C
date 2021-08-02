#include <stdio.h>

int main(void)
{
    char szname[32] = {0};

    printf("이름을 입력하세요 : ");
    gets(szname);

    printf("당신의 이름은 ");
    puts(szname);
    printf("입니다.");
    return 0;
}