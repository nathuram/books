#include <stdio.h>

int main(void)
{

	char first_name, last_name;

	printf("Enter a first and last name: ");

	while ( ( first_name = getchar() ) == ' ')
	{
		first_name  = getchar();
	}

	while ( (last_name = getchar() ) !=  ' ')
	{
		last_name = getchar();
	}

	while ( (last_name = getchar()) != '\n')
	{
		putchar(last_name);
	}

	putchar(','); putchar(' '); putchar(first_name); putchar('\n');

	return 0;
}





