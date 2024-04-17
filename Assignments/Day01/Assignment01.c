/*Pseudocode Development - Task: Write a detailed pseudocode for a simple program
 that takes a number as input, calculates the square if it's even or the cube if
it's odd, and then outputs the result. Incorporate conditional and looping
constructs.*/

#include <stdio.h>

int main() 
{
   
    int num  , square , cube ;


    printf("Enter a num: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
    {
           
        square = num * num ;
        printf("Hence the given number is Square \nSquare of %d is %d: \n",num,square);
   	 
    }

    else
    {
       cube = num * num * num;
       printf("Hence the given number is Cube \nCube of %d is %d:\n",num,cube);
    }
 return 0;

}