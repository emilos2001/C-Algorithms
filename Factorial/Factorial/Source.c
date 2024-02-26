#include<stdio.h>
int main() {
	int n;
	printf("introduceti un numar : ");
	scanf_s("%d", &n);
	int s = factorial(n);
	printf("Factorialul numarului %d este: %d\n", n, s);
	return 0;
}
int factorial(int n) {
	if (n == 0 || n == 1) 
	{
		return 1;
	}
	else 
	{
		return n * factorial(n - 1);
	}
}