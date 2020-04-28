#include <stdio.h>

int main(void)
{
	int digit_seen[10] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n%10;
		digit_seen[digit]++;
		n /= 10;
	}
	
	printf("Digit:\t\t");
	for (int a = 0; a < 10; a++)
		printf("%4d", a);
	printf("\n");
	
	printf("Occurences:\t");
	for (int b = 0; b < 10; b++)
		printf("%4d", digit_seen[b]);
	printf("\n");

	return 0;
}
