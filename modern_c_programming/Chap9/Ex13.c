int evaluate_position(char board[8][8])
{
	int white_sum, black_sum;

	for (int a = 0, a < 9; a++)
		for (int b = 0; b < 9; b++)
			switch (board[a][b])
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
		
					
