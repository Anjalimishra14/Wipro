#include<stdio.h>

int main()
{
    int qty = 100;
    int *ptr;

    printf("\n Address of qty = %u and its value = %d ", &qty, qty);
    printf("\n Address of ptr = %u and its value = %u ", &ptr, ptr);

    ptr = &qty;

     printf("\n Address of qty = %u and its value = %d ", &qty, qty);
    printf("\n Address of ptr = %u and its value = %u ", &ptr, ptr);

    printf("\n\n");
    
    return 0;
}

