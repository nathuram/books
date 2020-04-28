#include <stdio.h>

int main(void)
{
	char a;

	printf("Enter message: ");
	while ( ( a = getchar()) != '\n')
	{
		switch (toupper(a))
		{
			case 'A':
				putchar('4');
				break;
			case 'B':
				putchar('8');
				break;
			case 'E':
				putchar('E');
				break;
			case 'I':
				putchar('1');
				break;
			case 'O':
				putchar('0');
				break;
			case 'S':
				putchar('5');
				break;
			default:
				putchar(toupper(a));
				break;
		}
	}

	printf("!!!!!!!!!!!\n");
}


		
