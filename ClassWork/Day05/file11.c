#include<stdio.h>

int main()
{
    int n;
    int i = 0;

    scanf("%d",&n);

    while(i <= n)
    {
        int j = 0;
        while(j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}