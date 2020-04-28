#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (int i = 0; i*i <= n; i++)
		if (i % 2 == 0)
			printf("%d\n", i*i);
}


