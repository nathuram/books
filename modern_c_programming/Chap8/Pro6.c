#include <stdio.h>

int main(void)
{
	char message[100], a;
	int n = 0;

	printf("Enter message: ");

	while ( (a = getchar()) != '\n')
	{
		message[n++] = a;
	}
	printf("In B!FF speak: ");

	for (n = 0; n < 100; n++)
	{
		if (message[n]<0)
			break;

		switch (toupper(message[n]))
		{
			case 'A': putchar('4');
				  break;
			case 'B': putchar('8');
				  break;
			case 'E': putchar('3');
				  break;
			case 'I': putchar('1');
				  break;
			case 'O': putchar('0');
				  break;
			case 'S': putchar('5');
				  break;
			default:
				  putchar(toupper(message[n]));
				  break;
			}
	}

	printf("!!!!!!!!!\n");

	return 0;
}
		

		
