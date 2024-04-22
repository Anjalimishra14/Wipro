
#include<stdio.h>

void Reverse()
{
    FILE *file1;
    FILE *file2;

    file1=fopen("Reversefile1.txt","r");
    file2=fopen("Reversefile2.txt","w");
    
    if(file1==NULL)
    {
        printf("File not found\n");
        return ;
    }
    fseek(file1,0,SEEK_END);
    int file1Size=ftell(file1);

    for(int i=file1Size-1;i>=0;i--)
    {
        fseek(file1,i,SEEK_SET);
        fprintf(file2,"%c",fgetc(file1));
    }
}
int main()
{
    Reverse();
    return 0;
}
