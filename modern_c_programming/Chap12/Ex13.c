#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter size of matrix: ");
	scanf(" %d", &n);

	int arr[n][n];

	// as long as the code below isn't executed, we don't get ANY segfault. so why do we get a segfault for n>10 when it executes.

	for (int *p = &arr[0][0], i = 0; p < &arr[n][n]; p++ )
	{
		if (i % (n+1) == 0)
			*p = 1;
		else
			*p = 0;
		i++;
	}


	for (int i = 0; i < n; i++)
	{
		printf("\n");
		for (int j = 0; j < n; j++)
			printf("%10d\t ", arr[i][j]);
	}

	printf("\n\n");
	return 0;
}	
