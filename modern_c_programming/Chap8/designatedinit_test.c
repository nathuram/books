#include <stdio.h>

int main(void)
{
	int a[10] = {1, [4]=2, 2};

	for (int n = 0; n <= 9; n++)
		printf(" %d", a[n]);

	printf("\n");
	
	return 0;
}
