#include <stdio.h>

int main(void)
{
    char ch[100] = {0};
    int i = 0, count = 0;

    fgets(ch,sizeof(ch),stdin);

    while(ch[i] != '\0')
    {
        ++count;
        i++;
    }

    printf("한글 문자의 개수는 %d자 입니다.\n", count);
    return 0;
}