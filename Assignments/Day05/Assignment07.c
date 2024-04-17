/*Write the logic to print right triangle star pattern.
Input Format  : First line contains N of type integer.
Output Format : Print the right triangle star pattern.
Constrains:
2<=N<=10

Sample Input:
5
Sample Output:
*
**
***
****
*****
****                                                                   
***                                                                  
**                                                                    
*   
*/

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




