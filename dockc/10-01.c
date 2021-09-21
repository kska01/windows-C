#include <stdio.h>

int GetData(void)
{
    int Getnum = 0;
    printf("정수를 입력하세요. : ");
    scanf("%d", &Getnum);
    return Getnum;
}

int GetMax(int a, int b, int c)
{
    int Max = a;

    if(b > Max) Max = b;
    if(c > Max) Max = c;
    return Max;
}

int PrintData(int List0, int List1, int List2, int Max)
{
    printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.\n", List0, List1, List2, Max);
    return 0;
}

int main(void)
{
    int aList[3] = {0};
    int nMax = -9999, i = 0;

    for(i = 0; i < 3; ++i)
    {
        aList[i] = GetData();
    }

    nMax = GetMax(aList[0], aList[1], aList[2]);

    PrintData(aList[0], aList[1], aList[2], nMax);

    return 0;
}