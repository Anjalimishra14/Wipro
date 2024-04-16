#include<stdio.h>

int main()
{
    int age;

    printf("Please enter your Age:");
    scanf("%d",&age);

    if(age<18)
    {
        printf("Category : Minor Category \nYou are not eligible for the vote\n");
    }
    else 
    {
        if(age<65)
        {
            printf("Category : Adult Category \nYou are eligible for the vote\n");
        } 
        else
        {
            printf("Category :senior citizen Category \nYou are eligible for the vote\n");

        }
    }
   return 0;
}