#include <stdio.h>

int main(void)
{
	char a; int sum;

	printf("Enter a word: ");
	
	while ( (a = getchar()) != '\n')
	{
		switch (a)
		{
		case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'l': case 'L': case 'n': case 'N': case 'o': case 'O': case 'r': case 'R': case 's': case 'S': case 't': case 'T': case 'u': case 'U':
			sum += 1;
			break;
		case 'd': case 'D': case 'g': case 'G':
			sum += 2;
			break;
		case 'b': case 'B': case 'c': case 'C': case 'm': case 'M': case 'p': case 'P':
			sum += 3;
			break;
		case 'f': case 'F': case 'h': case 'H': case 'v': case 'V': case 'w': case 'W': case 'y': case 'Y':
			sum += 4;
			break;
		case 'k': case 'K':
			sum += 5;
			break;
		case 'j': case 'J': case 'x': case 'X':
			sum += 8;
			break;
		case 'q': case 'Q': case 'z': case 'Z':
			sum += 10;
			break;
		}
	}
	
	printf("Scrabble value: %d\n", sum);

	return 0;
}




