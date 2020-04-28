#include <stdio.h>

#define NUM_ROWS 10
#define NUM_COLUMNS 5

int test(int []);

int main(void)
{
	int a[NUM_ROWS][NUM_COLUMNS] ;
	int *p = &a[2];
	int o = 0;

	for (int i = 0; i < NUM_ROWS; i++)
		for (int j = 0;  j < NUM_COLUMNS; j++)
		{
			a[i][j] = o;
			o++;
		}

	for (int i = 0; i < NUM_ROWS; i++)
	{
		printf("\t");
		for (int j = 0;  j < NUM_COLUMNS; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	printf("\n%d\t\t", *p);

	p = a;

	printf("%d\t\t", *(p+2));
	printf("%d\t\t", p[2]);
	printf("%d\t\t", a[2]);

	test(a);

	return 0;
}

//the main() scope has information about the dimensions of a; that is why the pointer p points to the 1st element of the 3rd row.
//
//array subscripting and pointer subscripting are NOT the same thing. WHY ? because p[2] and a[2] are NOT giving me the same result.

int test(int n[])
{
	int *p = n;

	printf("%d\n\n", n[2][0]);

	return 0;
}

//the test() scope does not have information about the dimensions of a; it just treats a as a pointer, thus the pointer p points to the 3rd element of the first row. 


