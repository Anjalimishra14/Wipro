#include <stdio.h>

int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

void fibo(int n) {
    int a = 0, b = 1, c, i;
    printf("Fibonacci Series:\n");
    printf("%d %d ", a, b); 

    for (i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int num_fact, num_fibo;
    
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num_fact);
    printf("Factorial of %d is %d\n", num_fact, fact(num_fact));
    
    printf("\nEnter the number of terms for Fibonacci series: ");
    scanf("%d", &num_fibo);
    fibo(num_fibo);

    return 0;
}
