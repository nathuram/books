#include <stdio.h>

int main(void)
{
	long double number, original; long double factorial;

	printf("Enter a positive integer: ");
	scanf("%Lf", &number);

	factorial = number;
	original = number;

	while (--number != 0)
	{
		factorial = number * factorial;
	}

	printf("Factorial of %.0Lf is %.0Lf\n", original, factorial);

	return 0;	
}

