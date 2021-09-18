#include <stdio.h>

int main(void)
{
    int age = 0, busfee = 1000;
    printf("나이를 입력하세요. : ");
    scanf("%d", &age);

    if (age <= 13)
    {
        if (age >= 4) printf("최종요금 : %d원\n", busfee - (busfee / 2));
        else printf("최종요금 : %d원\n", busfee - (busfee / 1));
    }
    else
    {
        if (age <= 19) printf("최종요금 : %d원\n", busfee - (busfee / 4));
        else printf("최종요금 : %d원\n", busfee);
    }
    return 0;
}