#include<stdio.h>

int main()
{
    int i = 1, SumE = 0, SumO = 0;

    while ( i <= 50)
    {
        if( i % 2 == 0)
        {
            SumE = SumE + i;
        }
        else
        {
            SumO = SumO + i;
        }
        i++;
    }

    printf("Sum of Even number: %d\n", SumE);
    printf("Sum of Odd number: %d\n", SumO);

    return 0;
}