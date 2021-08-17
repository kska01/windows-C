#include <stdio.h>

int main(void)
{
    char szName[32] = {0};
    int nAge = 0;

    printf("나이를 입력하세요. : ");
    scanf("%d", &nAge);

    printf("이름을 입력하세요. : ");
    fflush(stdin);
    gets(szName, sizeof(szName));

    printf("%d, %s\n", nAge, szName);
    return 0;
}