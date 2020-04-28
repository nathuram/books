#include <stdio.h>

#define N 10

int find_largest(int a[], int n);

int main(void)
{
	int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("The largest element of the array is %d\n\n", find_largest(arr, N));

	return 0;
}

int find_largest(int a[], int n)
{
	int max = *a;

	for (int *p = a; p < a + n; p++)
		if (*p > max)
			max = *p;

	return max;
}
