#include <stdio.h>

int main(void)
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	*a = 22;
	*(&a[0]+2) = 30;

	for (int i = 0; i < 11; i++)
		printf("%d ", a[i]);

	printf("\n");

	return 0;
}
