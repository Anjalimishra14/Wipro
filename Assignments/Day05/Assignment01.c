/*. Print series 0,3,8,15,24,35,48,63,80,99 given n = 10*/

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