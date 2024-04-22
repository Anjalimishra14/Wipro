/*
sort the array element in assending order using pointer
*/

#include<stdio.h>

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr1, *ptr2, temp;
    int i;

    for(ptr1 = arr; ptr1< arr + size - 1; ptr1++)
    {
        for(ptr2 = ptr1 + 1; ptr2 < arr + size; ptr2++)
        {
            if(*ptr1 > *ptr2)
            {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;

            }
        }
    }

    printf("Array in Ascending order : ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
