#include <stdio.h>

int main() {
    int n;
    int i = 0;
    scanf("%d",&n);

    
    while(i< n)
    {
        int j = 1;
        while(j <= n)
        {
        printf("%d",j+(i*n));
        if(j<n) printf("%s","*");
        j++;
        }
        printf("\n");
        i++;
    }

     return 0;
}