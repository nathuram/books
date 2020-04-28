#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter a number: ");
	scanf("%4d", &number);

	if (number <= 9)
		printf("The number %d has 1 digit\n", number);

	else if (number <= 99)
		printf("The number %d has 2 digits\n", number);

	else if(number <= 999)
		printf("The number %d has 3 digits\n", number);

	else if(number <= 9999)
		printf("The number %d has 4 digits\n", number);
}
