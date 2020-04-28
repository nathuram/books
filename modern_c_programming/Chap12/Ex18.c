#include <stdio.h>

int evaluate_position(char *board);

int main(void)
{
	char board[8][8];

	board[0][0] = 'Q';

	printf("%d\n\n",evaluate_position(board[0])); 

	return 0;
}


int evaluate_position(char *board)
{
	int white_sum = 0, black_sum = 0;

	for (char *p = board ;  p < board + (8*8); p++)
		switch (*p)
		{
			case 'Q':
				white_sum += 9; break;
			case 'R':
				white_sum += 5; break;
			case 'B':
				white_sum += 3; break;
			case 'N':
				white_sum += 3; break;
			case 'P':
				white_sum += 1; break;
			case 'q':
				black_sum += 9; break;
			case 'r':
				black_sum += 5; break;
			case 'b':
				black_sum += 3; break;
			case 'n':
				black_sum += 3; break;
			case 'p':
				black_sum += 1; break;
		}



	return white_sum - black_sum;
}
		
					
