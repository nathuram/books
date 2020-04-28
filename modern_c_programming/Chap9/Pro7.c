#include <stdio.h>

int main(void)
{
	long int power(int, int), x, n;

	printf("Enter number: ");
	scanf("%d", &x);

	printf("Enter power: ");
	scanf("%d", &n);

	printf("%d to the power %d is %ld\n", x, n, power(x, n));

	return 0;
}

long int power(int x, int n)
{
	if (n == 0)
		return 1;
	

	if (n%2 == 0)
		return power(x, n/2) * power(x, n/2);
	
	else
		return x * power(x, n-1);
}


