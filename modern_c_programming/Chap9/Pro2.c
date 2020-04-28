#include <stdio.h>

int main(void)
{
	double compute_tax(float income);
	float income;

	printf("Enter your income: $");
	scanf("%f", &income);

	printf("Taxes due $%.2f\n", compute_tax(income));

	return 0;
}

double compute_tax(float income)
{

	if (income < 750)
		 return ((1.0f/100.0f)*income);
	else if (income < 2250)
		 return 7.50 + (2.0f/100.0f)*(income-750);
	else if (income < 3750)
		 return 37.50 + (3.0f/100.0f)*(income-2250);
	else if (income < 5250)
		return 82.50 + (4.0f/100.0f)*(income-3750);
	else if (income < 7000)
		return 142.50 + (5.0f/100.0f)*(income-5250);
	else
		return 230 + (6.0f/100.0f)*(income-7000);
}


