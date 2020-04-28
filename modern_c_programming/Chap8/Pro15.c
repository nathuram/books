#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char message[80], a;
	int c = 0, shift;

	printf("Enter message to be encrypted: ");


	while ( (a = getchar()) != '\n')
	{
		message[c]=a;
		c++;
	}

	printf("Enter shift amount (1 - 25): ");
	scanf("%d", &shift);

	for (int a = 0; a < c; a++)
	{
		if ( isalpha(message[a]) )
		{
			if (isupper(message[a]))
				message[a] = ( ((message[a] - 'A' + shift) % 26) + 'A');

			else
				message[a] = ( ((message[a] - 'a' + shift) % 26) + 'a');

		}

	}

	printf("Encrypted message: ");

	for (int a = 0; a < c; a++)
		printf("%c", message[a]);

	printf("\n");


	return 0;
}

