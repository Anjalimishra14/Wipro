#include<stdio.h>
int main()
{
    int r=1;
    int n;
    
    scanf("%d",&n);
    
    while(r <= n)
    {
        int c = 1;
        
        while(c <= r)
        {
            printf("*");
            c++;
        }
        printf("\n");
        r++;
    }
    
    r = n-1;
    while(r >= 1)
    {
        int c = 1;
        
        while(c <= r)
        {
            printf("*");
            c++;
        }
        printf("\n");
        r--;
    }
    return 0;
}




