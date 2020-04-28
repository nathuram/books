#include <stdio.h>

int main(void)
{
	long i = 0;
	long *p;
	long *k ;

	p = i;

	for (long i = 0; i < 10; i++)
	{
		k = i;
		printf("The values of %ld - %ld is %ld\n", p, k, p-k);
	}
	
	return 0;
}
