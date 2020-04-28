#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int letters[26] = {0}, is_anagram=1;
	char a;

	printf("Enter first word: ");

	while (( a = getchar()) != '\n')
	{
		if (isalpha(a))
			letters[toupper(a) - 'A']++ ;
	}

	printf("Enter second word: ");

	while (( a = getchar()) != '\n')
	{
		if (isalpha(a))
			letters[toupper(a) - 'A']-- ;
	}

	for (int counter = 0; counter < 26; counter++)
	{
		if (letters[counter] != 0)
		{
			is_anagram=0;
			break;
		}
	}

	if (is_anagram == 1)
		printf("The words are anagrams\n");
	else
		printf("The words are not anagrams\n");

	return 0;
}
