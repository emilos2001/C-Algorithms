#include<stdio.h>
int main() {
	int n;
	printf("Enter a number : ");
	scanf_s("%d", &n);
	int s = factorial(n);
	printf("The factorial of the number %d is: %d\n", n, s);
	return 0;
}

int factorial(int n) {
	if (n < 0) {
	printf("Please enter a non-negative integer.\n");
	printf("Enter a number : ");
	scanf_s("%d", &n);
	return factorial(n);
	}
	
	if (n == 0 || n == 1) 
	{
		return 1;
	}
	else 
	{
		return n * factorial(n - 1);
	}
}
