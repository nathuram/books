#include <stdio.h>

int main(void)
{
	float frac_part, f;

	printf("Enter a float number: ");
	scanf("%f", &f);

	frac_part = f - (int) f;

	printf("%f\n", frac_part);

	return 0;
}
