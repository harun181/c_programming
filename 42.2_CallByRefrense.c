// C program to illustrate Call by Reference
#include <stdio.h>

// Function Prototype
void swapx(int*, int*);

// Main function
int main()
{
	int a = 10, b = 20;

	// Pass reference
	swapx(&a, &b); // Actual Parameters

	printf("Inside the Caller:\na = %d b = %d\n", a, b);

	return 0;
}

// Function to swap two variables
// by references
void swapx(int* x, int* y) // Formal Parameters
{
	int t;

	t = *x;
	*x = *y;
	*y = t;

	printf("Inside the Function:\nx = %d y = %d\n", *x, *y);
}
