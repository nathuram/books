#include <stdio.h>

int main(void)
{
	int len = 0;

	printf("Enter a message: ");
	while (getchar() != '\n')
		len++;
	printf("Your messages was %d characters(s) long.\n", len);

	return 0;
}
