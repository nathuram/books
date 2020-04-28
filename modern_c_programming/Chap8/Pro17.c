#include <stdio.h>

int main(void)
{
	int n;

	printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");

	scanf("%d", &n);

	int square[n][n];

	for (int a = 0; a < n; a++)
		for (int b = 0; b < n; b++)
			square[a][b] = 0;

	int locy = 0, locx = (n/2);

	for (int a = 1; a <= n*n; a++)
	{
		if (square[locy][locx] == 0)
		{
			square[locy][locx] = a;
			locx = (locx + 1)%n;
			locy = (locy + n -1)%n;


		}
		else
		{
			square[(locy + 2)%n][(locx+n-1)%n] = a;
			locx = (((locx+n-1)%n)+1)%n;
			locy = (((locy + 2)%n) +n-1)%n;
			
		}

	}
	
	for (int a = 0; a < n; a++)
	{
		printf("\t");
		for (int b = 0; b < n; b++)
			printf("%d\t", square[a][b]);
		printf("\n");
	}



	return 0;
}
