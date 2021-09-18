#include <stdio.h>
#include <unistd.h>
#include <termios.h>

int _getch()
{
    int c;
    struct termios oldattr, newattr;

    tcgetattr(STDIN_FILENO, &oldattr);              // 현재 터미널 설정 읽음
    newattr = oldattr;                                  
    newattr.c_lflag &= ~(ICANON | ECHO);            // CANONICAL과 ECHO 끔
    newattr.c_cc[VMIN] = 1;                         // 최소 입력 문자 수를 1로 설정
    newattr.c_cc[VTIME] = 0;                        // 최소 읽기 대기 시간을 0으로 설정
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);     // 터미널에 설정 입력
    c = getchar();                                  // 키보드 입력 읽음
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);     // 원래의 설정으로 복구
    return c;
}

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