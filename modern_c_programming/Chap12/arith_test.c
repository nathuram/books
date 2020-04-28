#include <stdio.h>

int main(void)
{
	int i[5]  = {0, 1, 2, 3, 4};
	int *p = &i;
	int *q = &i[0];
	
	for (int a = 0; a < 100; a++)
		printf("%d\t\t%d\n", ++*p, ++*q);

	return 0;
}
