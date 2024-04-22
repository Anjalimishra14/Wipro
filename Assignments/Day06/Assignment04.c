/*
Assignment04:- Find a partition point in array

Given an unsorted array of integers. Find an element such that all the elements to its left are smaller and to its right are greater. Print -1 if no such element exists.

Note that there can be more than one such elements. For example an array which is sorted in increasing order all elements follow the property. We need to find only one such element.

Examples :

Input :  A[] = {4, 3, 2, 5, 8, 6, 7}  
Output : 5

Input : A[] = {5, 6, 2, 8, 10, 9, 8}
Output : -1
*/

#include <stdio.h>

int PartitionPoint(int arr[], int len) {
    
    for (int i = 0; i < len; i++) {
        int P = 1; 
        
       
        for (int j = 0; j < i; j++) {
            if (arr[j] >= arr[i]) {
                P = 0;
                break;
            }
        }
        
        
        for (int j = i + 1; j < len; j++) {
            if (arr[j] <= arr[i]) {
                P = 0; 
                break;
            }
        }
        
        // If it's a partition point, return it
        if (P) {
            return arr[i];
        }
    }
    
    return -1; // No partition point found
}

int main() {
    
    int arr1[] = {4, 3, 2, 5, 8, 6, 7};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Partition point: %d\n", PartitionPoint(arr1, len1));

    int arr2[] = {5, 6, 2, 8, 10, 9, 8};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Partition point: %d\n", PartitionPoint(arr2, len2));

    return 0;
}

