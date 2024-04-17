/*Recursive
Function and Efficiency Analysis - Write a recursive function pseudocode and
calculate the nth Fibonacci number and use Big O notation to analyze its
efficiency. Compare this with an iterative approach and discuss the pros and
cons in terms of space and time complexity.*/

#include <stdio.h>

int fibo(int n) 
{
    if (n==0) 
    {
        return 0;
    } 
    else if (n==1) 
    {
        return 1;
    } else 
    {
        return fibo(n-1) + fibo(n-2);
    }
}
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The %dth Fibonacci number: %d\n",n,fibo(n));
    return 0;
}
