#include <stdio.h>

int main(void)
{
	char a;

	printf("Enter phone number: ");
	while ( (a = getchar()) != '\n')
	{
		switch (a)
		{
			case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
				putchar('2');
				break;
			case 'd': case 'D': case 'e': case 'E': case 'f': case'F':
				putchar('3');
				break;
			case 'g': case 'G': case 'h': case 'H': case 'i': case 'I':
				putchar('4');
				break;
			case 'j': case 'J': case 'k': case 'K': case 'l': case 'L':
				putchar('5');
				break;
			case 'm': case 'M': case 'n': case 'N': case 'o': case 'O':
				putchar('6');
				break;
			case 'p': case 'P': case 'r': case 'R': case 's': case 'S':
				putchar('7');
				break;
			case 't': case 'T': case 'u': case 'U': case 'v': case 'V':
				putchar('8');
				break;
			case 'w': case 'W': case 'x': case 'X': case 'y': case 'Y':
				putchar('9');
				break;
			default:
				putchar(a);
		}
	}

	printf("\n");

	return 0;
}
		
		
