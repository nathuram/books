#include <stdio.h>

int main(void)
{
	char a;
	int vowels=0;

	printf("Enter a sentence: ");
	
	while ( ( a = getchar() ) != '\n')
	{
		switch(toupper(a))
		{
			case 'A': case 'E': case 'I': case 'O': case 'U':
				vowels++;
		}
	}

	printf("Your sentence contains %d vowels\n", vowels);

	return 0;
}


