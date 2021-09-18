#include <stdio.h>

int main(void)
{
    int sec = 0;

    scanf("%d", &sec);
    printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n",
     sec, sec/3600, (sec%3600)/60, (sec%3600)%60);
    return 0;
}