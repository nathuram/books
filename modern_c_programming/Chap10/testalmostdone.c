#include <stdio.h>

char digits[4][4];

const int segment[10][7] =    {{1,1,1,1,1,1,0},
				 {0,1,1,0,0,0,0},
				 {1,1,0,1,1,0,1},
				 {1,1,1,1,0,0,1},
				 {0,1,1,0,0,1,1},
				 {1,0,1,1,0,1,1},
				 {1,0,1,1,1,1,1},
				 {1,1,1,0,0,0,0},
				 {1,1,1,1,1,1,1},
				 {1,1,1,1,0,1,1}
				};

void process_digit(int, int);
void print_digits(void);
void clear_digits(void);

int main(void)
{
	int a;

	printf("Enter a digit: ");
	a = ( getchar() - '0');
//
//	printf("%d\n", a);
//
//	clear_digits();
//	print_digits();
//	printf("\n");
//	process_digit(a - '0', 1);
//

//	for (int i = 0; i < 10; i++)
//		for (int j = 0; j < 7; j++)
//			printf("segment[%d][%d] = %d\n", i, j, segment[i][j]);

	clear_digits();
	process_digit(a, 0);

	
}

void process_digit(int digit, int position)
{
	printf("printing %d\n\n",digit);
	for (int a = 0; a < 7; a++)
		printf("%d ", segment[digit][a]);
	printf("\n\n");

	if (segment[digit][0] == 1)
	{
		printf("updating 0th position \n");
		digits[0][position + 1] = '_';
	}

	print_digits();
	printf("\n\n");
	getchar();

	if (segment[digit][1] == 1)
	{
		printf("updating 1st position \n");
		digits[1][position+2] = '|';
	}

	print_digits();
	printf("\n\n");
	getchar();

	if (segment[digit][2] == 1)
	{
		printf("updating 2nd position\n");
		digits[2][position + 2] = '|';
	}

	print_digits();
	printf("\n\n");
	getchar();

	if (segment[digit][3] == 1)
	{
		printf("updating 3rd position\n");
		digits[2][position+1] = '_';
	}

	print_digits();
	printf("\n\n");
	getchar();
	if (segment[digit][4] == 1)
	{
		printf("updating 4th position \n");
		digits[2][position] = '|';
	}

	print_digits();
	printf("\n\n");
	getchar();
	if (segment[digit][5] == 1)
	{
		printf("updating 5th position \n");
		digits[1][position] = '|';
	}

	print_digits();
	printf("\n\n");
	getchar();
	if (segment[digit][6] == 1)
	{
		printf("updating 6th position \n");
		digits[1][position + 1] = '_';
	}
	print_digits();
	printf("\n\n");
	
}

void print_digits(void)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%c", digits[i][j]);
		printf("\n");
	}
}

void clear_digits(void)
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			digits[i][j] = ' ';
}
