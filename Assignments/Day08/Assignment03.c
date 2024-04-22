/*Assignment03:- Write a program to find the  n-th number made of prime digits 

Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.

Output Format:
Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000

Examples :
Input  : 
1
10
Output :
 33
*/

#include <stdio.h>

int isinarray(int reminder)
{
    int arr[] = { 2, 3, 5, 7};
    int len = sizeof(arr) /sizeof(arr[0]);
    for(int i = 0; i<len; i++)
    {
            if(arr[i] == reminder)
            {
                return 1;
            }
    }
    return 0;
}

int ismadeofarr(int n)
{
    int divder = n;
    while(divder > 0)
    {
        int reminder = divder % 10;
        divder = divder /10;
        if(isinarray(reminder) == 0)
        {
            return 0;
        };
    }
    return 1;
}

int main() 
{
    
    int input = 100;
    printf("enter the positive number: ");
    scanf("%d",&input);
    int i = 1;
    int counter = 1;
    while(i <= input)
    {
        int result  = ismadeofarr(counter);
        if(ismadeofarr(counter) == 1)
        {
            if(i==input) break;
            i++;
        }
        counter++;
    }
    printf("result: %d\n",counter);
    return counter;
}