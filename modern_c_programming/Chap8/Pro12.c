#include <stdio.h>

int main(void)
{
	const int alphabets[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 10, 4, 10};
	char a;
	int score = 0;

	printf("Enter a word: ");

	while ( toupper(( a = getchar() )) != '\n')
	{
		score += alphabets[a - 97];
	}

	printf("Scrabble value: %d\n", score);

	return 0;
}	
