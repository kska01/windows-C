#include <stdio.h>

int Getnum()
{
    int Input = 0;
    printf("1 ~ 10 사이의 정수를 입력하세요. : ");
    scanf("%d", &Input);
    if(Input < 1 || Input > 10)
    {
        printf("ERROR : 1 ~ 10 사이의 정수를 입력하세요.\n");
        return 0;
    }
    return Input;
}

int GetFactorial(int nParam)
{
    int nResult = 1, i = 0;
    for(i = 1; i <= nParam; ++i)
    {
        nResult *= i;
    }

    return nResult;
}

int PrintResult(int nResult)
{
    if (nResult == 1) return 0;
    printf("MAX : %d\n", nResult);
    return 0;
}

int main(void)
{
    int Input = Getnum();
    int nResult = GetFactorial(Input);
    PrintResult(nResult);
    return 0;
}