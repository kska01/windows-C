#include <stdio.h>

int main(void)
{
    char szname[32] = {0};

    printf("이름을 입력하세요 : ");
    fgets(szname, sizeof(szname), stdin);  // in linux
    // gets_s(szname, sizeof(szname));        in windows

    printf("당신의 이름은 ");
    puts(szname);
    puts("입니다.");
    return 0;
}