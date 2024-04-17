/* Print series 1, 2, 4, 8, 16, 32, 64. given n = 64*/
#include<stdio.h>

int main()
{
    int n = 64;
    int m = 1;

    
    while(m <= n)
    {
        printf("%d", m);
        if(m < n);
        {
            printf(", ");
        }
        m *= 2;
    }
    return 0;
}