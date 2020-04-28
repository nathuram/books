#include <stdio.h>

int main(void)
{
	int a = 0;
	int *p = &a;

	printf("The address of a is %d\n", p);
	printf("The address of a is %p\n", p);
	
	return 0;
}
