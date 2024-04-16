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