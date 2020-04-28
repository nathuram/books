#include <stdio.h>

int main(void)
{
	float amount, interest_rate, monthly_payments;

	printf("Enter amount of loan: ");
	scanf("%f", &amount);

	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);

	printf("Enter monthly payments: ");
	scanf("%f", &monthly_payments);

	interest_rate = (interest_rate/100)/12;

	amount -= monthly_payments;
	amount += interest_rate*amount;
	printf("Balance remaining after first payment: $%.2f\n", amount);

	amount -= monthly_payments;
	amount += interest_rate*amount;
	printf("Balance remaning after the second payment: $%.2f\n", amount);

	amount -= monthly_payments;
	amount += interest_rate*amount;
	printf("Balance remaining after the third payment: $%.2f\n", amount);

	return 0;
}
