#include <stdio.h>

int main(void)
{
	int n, d;
	printf("Enter a number: ");
	scanf("%d", &n);

	for (d = 2; d*d< n; d++){
		if (n %d*d == 0)
			break;
	}

	if (d*d<n)
		printf("%d is not a prime number.\n", n);
}
