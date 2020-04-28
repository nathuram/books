#include <stdio.h>

int main(void)
{
	void store_zeros(int [], int);
	int array[10];

	store_zeros(array, 10);

	for (int a =0; a < 10; a++)
		printf("%d ", array[a]);
	printf("\n");

	return 0;
}

void store_zeros(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = 0;
}
