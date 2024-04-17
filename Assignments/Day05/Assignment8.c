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
