#include <stdio.h>
#include <conio.h> // 리눅스에서는 conio.h 파일이 제공되지 않는다.

int main(void)
{
    char ch = 0;
    printf("아무 키나 누르면 다음으로 넘어갑니다. \n");
    ch = _getch();

    printf("입력한 키는 ");
    putchar(ch);
    printf("입니다.\n");
    return 0;
}