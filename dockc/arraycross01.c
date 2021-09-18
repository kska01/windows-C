#include <stdio.h>

int main(void)
{
    int zig[5][5] = {0};
    int row, col, val = 1;

    for(row = 0; row < 5; ++row)
    {
        if(row % 2 == 0)
        {
            for(col = 0; col < 5; ++col)
            {
                zig[row][col] = val++; 
            }
        }
        else
        {
            for(col = 4; col >= 0; --col)
            {
                zig[row][col] = val++;
            }
        }
    }

    for(row = 0; row < 5; ++row)
    {
        for(col = 0; col < 5; ++col)
        {
            printf("%d\t", zig[row][col]);
        }
        putchar('\n');
    }

    return 0;
}