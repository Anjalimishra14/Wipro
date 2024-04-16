#include <stdio.h>

int main()
{
	int val1 , val2 , add , sub , mul;
	float div;

	printf("Enter val1: ");
	scanf("%d",&val1);

	printf("Enter val2: ");
	scanf("%d",&val2);

	// For Addition
	add = val1 + val2;
	printf("\nAddition: %d + %d = %d\n", val1, val2, add);

	// For Subtraction
    sub = val1 - val2;
	printf("Subtraction: %d - %d = %d\n", val1, val2, sub);

	// For Multiplication
	mul = val1 * val2;
	printf("multiplication: %d * %d = %d\n", val1, val2,  mul);

	// For Division
	div = val1 / val2;
	printf("Addition: %d / %d = %f\n", val1, val2,  div);

	return 0;
}
