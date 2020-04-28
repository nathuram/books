#include <stdbool.h>
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

	printf("Repeated digit(s): ");
	for (int a = 0; a < 10; a++)
		if (digit_seen[a] > 1)
			printf(" %d", a);
	printf("\n");


	return 0;
}
