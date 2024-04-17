/*Pseudocode and Flowchart for Sorting Algorithm - Write
pseudocode and create a flowchart for a bubble sort algorithm. Provide a
brief explanation of how the algorithm works and a simple array of integers
to demonstrate a dry run of your algorithm.*/

#include <stdio.h>

int main() {
  
    int arr[] = {7,2,3,2,8,2,9};
    int length = sizeof(arr) / sizeof(arr[0]);
   
    for(int i = 0; i < (length-1); i++){
       // printf("%d \n",i);
        for(int  j = 0; j < (length - 1); j++ ) {
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            };
        };
        
    };
   
    for(int loop = 0; loop < length-1; loop++)
      printf("%d ", arr[loop]);
   return 0;
}