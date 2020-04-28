#include <stdio.h>

int main(void)
{
	float income;

	printf("Enter your income: $");
	scanf("%f", &income);

	if (income < 750)
		printf("Tax due $%.2f\n", ((1.0f/100.0f)*income));
	else if (income < 2250)
		printf("Tax due$%.2f\n", 7.50 + (2.0f/100.0f)*(income-750));
	else if (income < 3750)
		printf("Tax due$%.2f\n", 37.50 + (3.0f/100.0f)*(income-2250));
	else if (income < 5250)
		printf("Tax due$%.2f\n", 82.50 + (4.0f/100.0f)*(income-3750));
	else if (income < 7000)
		printf("Tax due$%.2f\n", 142.50 + (5.0f/100.0f)*(income-5250));
	else
		printf("Tax due$%.2f\n", 230 + (6.0f/100.0f)*(income-7000));

	return 0;
}
