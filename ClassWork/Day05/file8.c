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