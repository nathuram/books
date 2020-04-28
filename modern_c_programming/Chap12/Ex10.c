#include <stdio.h>

#define N 10

int *find_middle(int a[], int n);

int main(void)
{
	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("The middle of the array is %d\n\n", *find_middle(a, N));

	return 0;
}

int *find_middle(int a[], int n)
{
	return a + (n)/2;

}
