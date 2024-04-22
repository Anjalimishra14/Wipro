/* Assignment01:- rotate array every kth element
i/p
1 2 3 4 5 6 7 8 9
k= 3
o/p
3 2 1 6 5 4 9 8 7

i/p
1 2 3 4 5 6 7 8 9
k= 4
o/p
4 3 2 1 8 7 6 5 9 */

#include <stdio.h>

int main() {
   
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    for (int i = 0; i < size; i += k)
    {
        int start = i;
        int end = i + k - 1;
       
        while (start < end) 
	{
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    // Print the rotated array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
   
   
   
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int size1 = 8;
  int l = 4;
 
  for (int i = 0; i < size1; i += l) 
  {
      int start = i;
      int end = i + l - 1;
   
      while (start < end) 
      {
           int temp = arr1[start];
           arr1[start] = arr1[end];
           arr1[end] = temp;
           start++;
            end--;
      }
    }

   for (int i = 0; i < size1; i++)
  {
        printf("%d ", arr1[i]);
  }

    return 0;
}
