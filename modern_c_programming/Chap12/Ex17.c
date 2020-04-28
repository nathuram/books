#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

int sum_two_dimensional_arry(const int a[][LEN], int n)
{
	int sum = 0;

	for (int *p = (int *) *a; p < *a + (LEN*n); p++)
		sum += *p;

	return sum;
}

int main(void)
{
	int m;

	printf("Enter number of rows: ");
	scanf(" %d", &m);

	int arr[m][LEN];

	srand(time(NULL));

	for (int i = 0; i < m; i++)
		for (int j = 0; j < LEN; j++)
			arr[i][j] = rand() % 100;

	printf("The sum of the array is %d\n\n", sum_two_dimensional_arry((const int (*) [10]) arr, m));

	return 0;
}



