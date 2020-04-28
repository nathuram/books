#include <stdio.h>

#define NUM_ROWS 10
#define NUM_COLUMNS 10

void test(int *);

int main(void)
{
	int arr[NUM_ROWS][NUM_COLUMNS];
	int *p = arr; int *q = &arr[0]; int *r = &arr[0][0];

	for (int *i = &arr[0][0], o = 0; i < &arr[NUM_ROWS][NUM_COLUMNS]; i++)
	{
		*i = o;
		o++;
	}

	for (int i = 0; i < NUM_ROWS; i++)
	{
		printf("\t\t");
		for (int j = 0; j < NUM_ROWS; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}

	printf("a[2][2] = %d\t\n", arr[2][2]);
	printf("a[0][2] = %d\t\n", arr[0][2]);
//	printf("a[2] = %d\t", arr[2]);
	printf("p[2] = %d\t",*(p+2));
//	printf("r[2][2] = %d\t", r[2][2]);
	
	return 0;
}

// pointers dont seem to allow double brace subscripting. arrays do. Therefore, I think array subscription IS NOT THE SAME as pointer subscription.
//
// Multidimensional arrays seem to be causing issues here.
