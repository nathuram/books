#include <stdio.h>

#define N 10

int find_largest(int a[], int n);

int main(void)
{

	return 0;
}

int find_largest(int a[], int n)
{
	int i, max;

	max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}
