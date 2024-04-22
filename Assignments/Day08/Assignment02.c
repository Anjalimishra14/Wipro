/* Assignment02 :-Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .

Constraints:

1<=T<=100
1<=N<=100

Examples:

Input : 6
Output : 14

1,4 6, 9.11,14

Input : 21
Output : 111 */


#include <stdio.h>

int isinarray(int reminder)
{
    int arr[] = {1, 4, 6, 9};
    int len = 4;
    for(int i = 0; i<len; i++){
            if(arr[i] == reminder){
                return 1;
            }
        }
    return 0;
}

int ismadeofarr(int n){
    int divder = n;
    while(divder > 0){
        int reminder = divder % 10;
        divder = divder /10;
        if(isinarray(reminder) == 0){
            return 0;
        };
    }
    return 1;
}

int main() 
{
    
    int input = 6;
    printf("enter the positive number: ");
    scanf("%d",&input);
    int i = 1;
    int counter = 1;
    while(i <= input){
        int result  = ismadeofarr(counter);
        if(ismadeofarr(counter) == 1){
            if(i==input) break;
            i++;
        }
        counter++;
    }
    printf("result: %d \n",counter);
    return counter;
}
