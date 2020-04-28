#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Enter a three-digit number: ");
	scanf("%3d", &a);

	b = a%100;

	printf("The reversal is %1d%d%1d\n", b%10, b/10, a/100);

	return 0;
}
