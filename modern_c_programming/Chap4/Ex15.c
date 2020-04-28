#include <stdio.h>

int main(void)
{
	int i = 1; int j = 2;

	i+=j;
	printf("%d %d\n", i, j);
	// 3 2

	i = 1; j = 2;
	i--;
	printf("%d %d\n", i, j);
	// 0 2

	i = 1; j = 2;
	i * j / i;
	printf("%d %d\n", i, j);
	// 1 2

	i = 1; j = 2;
	i % ++j;
	printf("%d %d\n", i, j);
	// 1 3

	return 0;
}	
					
