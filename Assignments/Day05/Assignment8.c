/*Write the logic to for incrementing Squared Number-Star Pattern.
Input Format      : Take N as input of type integer.
Output Format     : Print incrementing Squared Number-Star Pattern.

Constraints:
2<=N<=10
Sample Input:
5
Sample Output:
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25*/

#include<stdio.h>

int main()
{

    int n;
    int i = 0;

    scanf("%d",&n);

    while(i<n)
    {
        int j = 1;
        while(j < n)
        {

            if(j<n-i)
            {
                printf("%s"," ");
            }
            else
            {
                printf("%c",i+j-n+65);

            }
                j++;
        }

                while(j >= 1)
                {

                    if(j<n-i)
                {
                    printf("%s"," ");
                }
                else
                {
                    printf("%c",i+j-n+65);

                }
                    j--;
                }
                    printf("\n");
                    i++;
    }

 return 0;
}
