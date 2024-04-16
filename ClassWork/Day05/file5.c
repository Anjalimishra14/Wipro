#include<stdio.h>

int main()
{
    int i=1, n=10, m=0;

    printf("%d",m);

    while(i < n)
    {
        m += i * 2 + 1;
        printf(", %d", m);
        i++;
    }
    return 0;
}