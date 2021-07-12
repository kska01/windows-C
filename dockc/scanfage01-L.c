#include <stdio.h>

int main(void)
{
    char szname[32] = {0};
    int nage = 0;

    printf("나이를 입력하세요. : ");
    scanf("%d", &nage);

    printf("이름을 입력하세요. : ");
    gets(szname);

    printf("%d, %s\n", nage, szname);
    return 0;
}