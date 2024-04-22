#include<string.h>

#include<stdio.h>
int main()
{
    FILE *fptr=NULL;
    fptr=fopen("Reversefile1.txt","a+");
    if(fptr==NULL)
    {
        printf("FILE NOT FOUND");
        return 0;
    }
    printf("FILE FOUND");
    fprintf(fptr,"HELLO WELCOME TO CODING WORLD!!\n");
    return 0;

}