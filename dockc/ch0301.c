#include <stdio.h>

int main(void)
{
    char input[10] = {0};

    printf("입력 : ");
    fgets(input, sizeof(input), stdin);
    printf("출력 : %c\n", input[1]);
    return 0;
}