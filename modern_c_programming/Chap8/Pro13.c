#include <stdio.h>

int main(void)
{
	char lastname[20];
	char name, a;
	int c = 0;

	printf("Enter a first name and last name: ");

	scanf(" %c ", &name);

	while ( getchar() != ' ')
	{
		;
	}

	scanf(" ");

	while ( (a = getchar()) != '\n')
	{
		if ( (a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z') )
		{
			lastname[c] = a;
			c++;
		}
	}

	printf("You entered the name: ");

	for (int d  = 0; d  < c; d++)
	{
		printf("%c", lastname[d]);
	}

	printf(", %c.\n", name);

	return 0;
}

