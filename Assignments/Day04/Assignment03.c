/*Classify a person's age group and determine if they are eligible to vote. 
A person under 18 is a minor, between 18 and 65 is an adult, and above 65 is 
a senior. Only adults and seniors are eligible to vote.

Output

Category: Adult

Eligible to vote.

The age is 20, so the first if condition age < 18 is false. It moves to the else
 block, where age <= 65 is true. Therefore, it prints "Category: Adult" and 
 "Eligible to vote."*/

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