#include <stdio.h>

int main(void)
{
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;

	printf("Enter the numbers from 1 to 16 in any order: \n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

	printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen);

	printf("\nRow sums: %d\t%d\t%d\t%d\n", one+two+three+four, five+six+seven+eight, nine+ten+eleven+twelve, thirteen+fourteen+fifteen+sixteen);

	printf("Column sums: %d\t%d\t%d\t%d\n", one+five+nine+thirteen, two+four+six+eight, three+seven+eleven+fifteen, four+eight+twelve+sixteen);

	printf("Diagonal sums: %d\t%d\n", one+six+eleven+sixteen, four+seven+ten+thirteen);

	return 0;
}
