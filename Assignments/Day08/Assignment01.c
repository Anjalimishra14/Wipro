/*Assignment01:- Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
No of Ways = 4

No of Ways=-1*/

#include <stdio.h>

int main()
{
    int input;
    int i = 1;

    printf("enter the positive number: ");
    scanf("%d",&input);

    int primeArr[input/2];
    int ina = 0;
    int result = 0;

    while (i<= input)
    {
        int k = 2;
        int isprime = 1;

        while(k <= i/2)
        {
           if(i%k == 0)
           {
               isprime = 0;
           }
           k++;
        }
        if(isprime)
        {
            primeArr[ina] = i;
            ina++;
        }
        i++;
    };
    ina--;

    i = 0;
    while(ina > i)
    {
         if(primeArr[ina] + primeArr[i] > input)
         {
             ina--;
         }
         if(primeArr[ina] + primeArr[i] < input)
         {
           i++;
         }
         if(primeArr[ina] + primeArr[i] == input)
         {
          printf("%d__%d\n",primeArr[ina] , primeArr[i]);
          result++;
          ina--;
         }
    }
    
    if(result == 0)
    {
        printf("No of ways -1\n");
    }
    else
    {
        printf("No of ways %d\n", result);  
    }
    return result;
}
