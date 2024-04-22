/*
Assignment03:-
Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium
index (if any) or -1 (if no equilibrium indexes exist).

TESTCASE 1:
Input:
7
[-7, 1, 5, 2, -4, 3, 0]
3
[-7, 0, 0, 0, -4, 4, 0]
0
[0 0 0 0 -1]
4
Output:
3
*/



#include <stdio.h>

int main()
{
     int arr[] = {-7, 1, 5, 2, -4, 3,0};
     //int arr[] = {-7, 0,0,0,-4,4,0};
    //int arr[] = {0,0,0,0,-1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int totalsum = 0;
    while(i < len){
        totalsum += arr[i];
        printf("%d, ", arr[i]);
       //printf("%d\n",totalsum);
        i++;
    }
    i=0;
    int runningsum = 0;
    while(i<len){
        totalsum -=arr[i] ;
       
        //printf("totalsum = %d , runningsum= %d index =%d\n",totalsum,runningsum,i);
        if(totalsum == runningsum){
            printf("\nequilibriam at %d", i);
            return 0;
        }
        runningsum += arr[i];
        i++;
    }
    return -1;
}
