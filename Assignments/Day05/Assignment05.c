/*Input
Format  : First line contains N of type
integer.

Output
Format : Print the rectangle star pattern.
Constrains:

2<=N<=10

Sample Input:
5

Sample Output:
*****
*****
*****
*****
******/

#include<stdio.h>

int main()
{
    int n;
    int i = 0;

    scanf("%d",&n);

    while(i < n)
    {
        int j = 0;
        while(j < n)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}