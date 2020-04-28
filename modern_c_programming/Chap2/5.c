#include <stdio.h>

int main(void)
{
	int x;

	printf("Enter a value for x: ");
	scanf("%d", &x);

	printf("The value of the polynomial for x = %d is %d\n", x, 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6);
}
