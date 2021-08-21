#include <stdio.h>

int main(void)
{ 
    int age;
    scanf("%d", &age);

    if (age < 20) printf("최종요금 : %d원\n", 1000 - (int)(1000 * 0.25));
    else printf("최종요금 : %d원\n", 1000 - (1000 * 0));
    return 0;
}