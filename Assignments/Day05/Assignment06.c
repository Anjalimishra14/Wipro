#include<stdio.h>

int main()
{
    int n;
    int i = 1;

    scanf("%d",&n);

    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}