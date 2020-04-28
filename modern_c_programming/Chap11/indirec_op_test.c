#include <stdio.h>

int main(void)
{
	int i = 10;
	int j = &i;
	int *p = &i;


	printf("The address of i is %d \n", j);
	printf("The address of i is %d\n", p);

	return 0;
}

