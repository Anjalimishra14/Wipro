/*
Assignment02:-
Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
The last line contains an integer, denoting the sum.

Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000

Output Format:
The output line contains integers denoting the indexes.

TESTCASE 1:
Input:
7
[1, 4, 0, 0, 3, 10, 5]

sum = 7
Output:
Sum found between indexes 1 and 4

 TESTCASE 2:
 Input:
 2
 [1, 4]
 sum = 0
 Output:
 No subarray found */


#include <stdio.h>

int main() {
    
  
     int arr[] = {1, 4, 0, 0, 3, 10, 5};
     int targetsum = 7;
    //int arr[] = {1, 4};
   // int targetsum = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    int end = len-1;
    int left = 0;
    while(left < end){
        int right = left;
        int currsum = 0;
        while(right < end){
            currsum = currsum + arr[right];
            if(currsum == targetsum){
                printf("Sum found between indexes %d and %d\n",left,right);
                return 0;
            }
          
            right++;
        }
        left++;
    }
    printf("No Subarray Found");

    return 0;
}
