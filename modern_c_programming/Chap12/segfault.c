#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter size of matrix: ");
	scanf(" %d", &n);

	int arr[n][n];


//	for (int *p = &arr[0][0], i = 0; i < (n*n); i++ )
//	{
		// code executes till here
//		p += i;
//		if (i % (n+1) == 0)
//			*p = 1;
//		else
//			*p = 0;
//	}


	for (int i = 0; i < n; i++)
	{
		printf("\n");
		for (int j = 0; j < n; j++)
			printf("%10d\t ", arr[i][j]);
	}

	printf("\n\n");
	return 0;
}	
