/*Find out the sum of series   3+33+333+3333+33333+333333*/

#include<stdio.h>

int main()
{
    int n = 6;
    int sum = 0, i=1, m = 3;

    while(i <= 6)
    {
        sum = sum + m;
        m = (m * 10) + 3;
        printf("%d ",m);
        i++;
    }
    printf("\nSum of series:%d\n",sum);

    return 0;
}