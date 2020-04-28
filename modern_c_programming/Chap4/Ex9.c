#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 7; j = 9;
	i *= j + 1;
	printf("%d %d\n",i, j );
	// 70 9

	i = j = k = 1;
	i += j += k;
	printf("%d %d %d\n", i, j, k);
	// 3 2 1

	i = 2; j = 1; k = 0;
	i *= j *=  k;
	printf("%d %d %d\n", i, j, k);
	// 0 0 0
}


