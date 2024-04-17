/*Write a program to print table of any number given by the user in the pattern 
ex.:- 2 x 1 = 2 
      2 x 2 = 4
      :   :   :
      :   :   :
      :   :   :
      :   :   :
      2 x 10 = 20*/

#include<stdio.h>

int main()
{
    int table, res;

    printf(" Table: ");
    scanf("%d", &table);

    for(int i=1; i<=10; i++)
    {
        res = table * i;
        printf("%d x %d = %d", table, i, res);
        printf("\n");
    }
    return 0;
}