#include <stdio.h>

void store_zeros(int a[], int n);

int main(void)
{
	int n;
	int i = 0;

	printf("Enter array size: ");
	scanf(" %d", &n);

	int arr[n];

	store_zeros(arr, n);

	do
	{
		printf("%d ", arr[i]);
		i++;
	}
	while( i < n);
	printf("\n\n");

	return 0;
}

void store_zeros(int a[], int n)
{
	for (int *p = a; p < a + n; p++)
	{
		*p = 0;
	}

	return ;
}
