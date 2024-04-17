/*statement: Write the logic to print right triangle star pattern.

Input
Format  : First line contains N of type
integer.

Output
Format : Print the right triangle star pattern.

Constrains:

2<=N<=10

Sample Input:
5
Sample Output:
*
**
***
****
***** */

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