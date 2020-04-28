#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	void read_word(int counts[26]);
	bool equal_array(int counts1[26], int counts2[26]);

	int letters1[26] = {0}, letters2[26] = {0};

	printf("Enter first word: ");
	read_word(letters1);

	printf("Enter second word: ");
	read_word(letters2);

	equal_array(letters1, letters2) ? printf("The words are anagrams.\n") : printf("The words are not anagrams\n");
}

void read_word(int counts[26])
{
	char a;	
	while (( a = getchar()) != '\n')
		{
			if (isalpha(a))
				counts[toupper(a) - 'A']++ ;
		}
}

bool equal_array(int counts1[26], int counts2[26])
{
	for (int a = 0; a < 26; a++)
		if (counts1[a] != counts2[a])
			return false;

	return true;
}

