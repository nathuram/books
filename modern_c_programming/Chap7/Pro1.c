#include <stdio.h>

// Short integers on my machine are 16 bits, with one bit for the sign
// Integers on my machine are 32 bits, with one bit for the sign
// And so I think long ints will be 64

int main(void)
{
	long int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%ld", &n);

	for (i = 1; i <= n; i++){
		printf("%ld\t%ld\n", i, i*i);
		if ((i*i) < 0)
			break;
	}	
		
	return 0;
}
