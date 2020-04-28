#include <stdio.h>

int main(void)
{
	float amount, interest_rate, monthly_payments;
	int number_of_payments;

	printf("Enter amount of loan: ");
	scanf("%f", &amount);

	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);

	printf("Enter monthly payments: ");
	scanf("%f", &monthly_payments);

	printf("Enter number of payments: ");
	scanf("%d", &number_of_payments);

	interest_rate = (interest_rate/100)/12;

	for (int i = 1; i <= number_of_payments; i++){
		amount -= monthly_payments;
		amount += interest_rate*amount;
		printf("Amount left to be paid %f\n", amount);
	}

	return 0;
}
