#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
	int amount;

	int twenties, tens, fives, ones;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	pay_amount(amount, &twenties, &tens, &fives, &ones);

	printf("\n$20 bills: %d\n", twenties);
	printf("\n$10 bills: %d\n", tens);
	printf("\n$5 bills: %d\n", fives);
	printf("\n$1 bills: %d\n", ones);


}

void pay_amount(int amount, int *twenties, int *tens, int *fives, int *ones)
{

	*twenties = amount/20;
	amount -= 20*(amount/20) ;

	*tens = amount/10;
	amount -= 10*(amount/10);
		
	*fives = amount/5;
	amount -= 5*(amount/5);

	*ones = amount/1;
}	
