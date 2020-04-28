#include <stdio.h>

int main(void)
{
	int num_shares;
	float commission, value, price;

	printf("Enter the number of shares: ");
	scanf("%d", &num_shares);

	printf("Enter the price of each share: $");
	scanf("%f", &price);

	value = num_shares*price;

	if (value < 2500.00f)
		commission = 30.00f + 0.17f * value;
	else if (value < 6250.00f)
		commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + 0.0034f * value;
	else if (value <50000.00f)
		commission = 100.00f + 0.0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + 0.0011f * value;
	else 
		commission = 255.00f + 0.0009f * value;
	
	if (commission < 39.00f)
		commission = 39.00f;

	printf("Commision: $%.2f\t", commission);

	if (num_shares < 2000)
		printf("Rival's commission: $%.2f\n", 33 + (3/100)*num_shares);
	else
		printf("Rival's commission: $%.2f\n", 33 + (2/100)*num_shares);

	return 0;
}
