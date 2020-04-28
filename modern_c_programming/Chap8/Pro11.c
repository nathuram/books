#include <stdio.h>

int main(void)
{
	char number[15];
	int a = 0;

	printf("Enter phone number: ");
	while ( (number[a] = getchar()) != '\n')
	{
		switch (number[a])
		{
			case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
				number[a] = '2';
				break;
			case 'd': case 'D': case 'e': case 'E': case 'f': case'F':
				number[a] = '3';
				break;
			case 'g': case 'G': case 'h': case 'H': case 'i': case 'I':
				number[a] = '4';
				break;
			case 'j': case 'J': case 'k': case 'K': case 'l': case 'L':
				number[a] = '5';
				break;
			case 'm': case 'M': case 'n': case 'N': case 'o': case 'O':
				number[a] = '6';
				break;
			case 'p': case 'P': case 'r': case 'R': case 's': case 'S':
				number[a] = '7';
				break;
			case 't': case 'T': case 'u': case 'U': case 'v': case 'V':
				number[a] = '8';
				break;
			case 'w': case 'W': case 'x': case 'X': case 'y': case 'Y':
				number[a] = '9';
				break;
		}
		a++;
	}

	printf("In numeric form: ");
	
	for (int a = 0; a < 15; a++){
		printf("%c", number[a]);
	}

	printf("\n");


	return 0;
}
		
		
