#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 1;
	printf("%d ", i++ -1);
	printf("%d\n", i);
	// 0 1
	
	i = 10; j = 5;
	printf("%d ", i++ - ++j);
	printf("%d %d\n", i, j);
	// 6 11 6
	
	i = 8; j = 8;
	printf("%d ", i++ - --j);
	printf("%d %d\n", i , j);
	// 1 9 7
	
	i = 3; j = 4; k = 5;
	printf("%d ", i++ - j++ + --k);
	printf("%d %d %d\n", i, j, k);
	// -5 4 5 4
	
	return 0;
}
