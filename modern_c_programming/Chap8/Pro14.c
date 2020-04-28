#include <stdio.h>

int main(void)
{
	char a, sentence[100], sign;
        int c = 0; 

	printf("Enter a sentence: ");

	while ( (a = getchar()) != '\n' ) 
	{
		if ( a == '?' || a == '!' || a == '.')
		{
			sign = a;
			break;
		}

		sentence[c] = a;
		c++;
	}
	
	for (int d = c; d >= 0; d--)
	{
		if ( (d == 0) && (sentence[d] != ' ') )
		{
			for (int a = d; a < 99; a++)
			{
				if (sentence[a] == ' ')
				{
					break;
				}
				else
					printf("%c", sentence[a]);
			}
		}

		if ( (sentence[d] == ' ') && (d != c) && (d != 99) )  
		{
			for (int a = d+1; a <=  c; a++)
			{
				if ( (sentence[a] == ' ') || (a == c))
				{
					printf(" ");
					break;
				}
				else
					printf("%c", sentence[a]);

			}
		}
		
		
	}

	printf("%c\n", sign);
	//printf("\n\n");

	//for (int a = 0; a < 100; a++)
	//	printf("\t\t\t\t%d\t\t%c\n", a, sentence[a]);





	return 0;
}


