#include <stdio.h>

int main(void)
{
	int a;

	printf("Enter a two-digit number: ");
	scanf("%2d", &a);

	printf("The reversal is %1d%d\n", a%10, a/10);
	
	return 0;
}
