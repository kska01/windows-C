#include <stdio.h>

int main(void)
{
    char buffer = 0;

    buffer = getchar();
    buffer = getchar();
    printf("%c\n", buffer);
    return 0;
}