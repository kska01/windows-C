#include <stdio.h>

int main(void)
{
    char szbufferleft[32] = {0};
    char szbufferright[32] = {0};

    scanf("%s%s", szbufferleft, szbufferright);
    printf("%s %s\n", szbufferleft, szbufferright);
    return 0;
}