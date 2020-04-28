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

	printf("%d\n", a);

	clear_digits();
	process_digit(a - '0', 1);
	print_digits();
}

void process_digit(int digit, int position)
{
	if (segment[digit][0])
		digits[0][position + 1] = '_';

	print_digits();
	printf("\n\n");
	getchar();

	if (segment[digit][1]);
		digits[1][position + 2] = '|';

	print_digits();
	printf("\n\n");
	getchar();
	if (segment[digit][2]);
		digits[2][position + 2] = '|';

	print_digits();
	printf("\n\n");
	getchar();
	if (segment[digit][3]);
		digits[2][position + 1] = '_';

	print_digits();
	printf("\n\n");
	getchar();
	if (segment[digit][4])
		digits[2][position] = '|';

	print_digits();
	printf("\n\n");
	getchar();
	if (segment[digit][5])
		digits[1][position] = '|';

	print_digits();
	printf("\n\n");
	getchar();
	if (segment[digit][6])
		digits[1][position + 1] = '_';
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
			digits[i][j] = 'a';
}
