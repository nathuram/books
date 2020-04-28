#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_largest(int a[], int n);

int main(void)
{
	srand(time(NULL));
	int temperatures[7][24];

	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 24; j++)
			temperatures[i][j] = rand() % 50;


	for (int i = 0; i < 7; i++)
		printf("%2d\t", find_largest(temperatures[i], 24));

	printf("\n\n");


}

	



int find_largest(int a[], int n)
{
	int max = *a;

	for (int *p = a; p < a + n; p++)
		if (*p > max)
			max = *p;

	return max;
}
