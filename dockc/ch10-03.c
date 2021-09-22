#include <stdio.h>
    
int fee = 100;

int GetFee(int age)
{
    if(age <= 3) return 0;
    else if(age > 3 && age <= 13) return (fee / 2);
    else if(age > 13 && age <= 19) return (fee * 3 / 4);
    else return fee;
}

int main(void)
{
    int age = 0, result = 0;

    printf("나이를 입력하세요. : ");
    scanf("%d", &age);
    result = GetFee(age);
    printf("요금은 %d원 입니다.\n", result);
}