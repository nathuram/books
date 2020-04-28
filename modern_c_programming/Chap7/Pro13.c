#include <stdio.h>

int main(void)
{
	float num_words; float word_len; char letter;

	printf("Enter a sentence: ");

	num_words = 1;
	word_len = 0;

	while ( (letter = getchar()) != '\n')
	{
		if (letter == ' ')
			num_words++;
		else
			word_len++;
	}

	printf("Average word length: %.1f\n", word_len/num_words);

	return 0;
}
			
