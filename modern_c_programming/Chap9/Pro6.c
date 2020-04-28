#include <stdio.h>

int main(void)
{
	int compute(int x);
	int n;

	printf("Enter the value of x: ");
	scanf("%d", &n);

	printf("The value of the polynomial for %d is %d\n", n, compute(n));

	return 0;
}

int compute(int x)
{
	return (3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6;
}
