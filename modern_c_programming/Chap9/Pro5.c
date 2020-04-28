#include <stdio.h>

int main(void)
{
	void create_magic_square(int n, char magic_square[n][n]);
	void print_magic_square(int n, char magic_square[n][n]);

	int n; 

	printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
	scanf("%d", &n);

	int magic_square[n][n];

	create_magic_square(n, magic_square);
	print_magic_square(n, magic_square);

	return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
	for (int a = 0; a < n; a++)
		for (int b = 0; b < n; b++)
			magic_square[a][b] = 0;

	int locy = 0, locx = (n/2);

	for (int a = 1; a <= n*n; a++)
	{
		if (magic_square[locy][locx] == 0)
		{
			magic_square[locy][locx] = a;
			locx = (locx + 1)%n;
			locy = (locy + n -1)%n;


		}
		else
		{
			magic_square[(locy + 2)%n][(locx+n-1)%n] = a;
			locx = (((locx+n-1)%n)+1)%n;
			locy = (((locy + 2)%n) +n-1)%n;
			
		}

	}
}

void print_magic_square(int n, char magic_square[n][n])
{
	for (int a = 0; a < n; a++)
		{
			printf("\t");
			for (int b = 0; b < n; b++)
				printf("%d\t", magic_square[a][b]);
			printf("\n");
		}
}
		
