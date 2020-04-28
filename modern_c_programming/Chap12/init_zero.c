#include <stdio.h>

#define NUM_ROWS 10
#define NUM_COLUMNS 10

int main(void)
{
	int a[NUM_ROWS][NUM_COLUMNS];

	int *p;

	for (p = &a[0][0]; p <= &a[NUM_ROWS-1][NUM_COLUMNS-1]; p++)
		*p = 0;

	for (p = &a[0][0]; p <= &a[NUM_ROWS-1][NUM_COLUMNS-1]; p++)
		printf("%d ", *p);

	printf("\n");

	return 0;
}
