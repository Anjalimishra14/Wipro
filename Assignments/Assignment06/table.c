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