#include <stdio.h>

int *pass(int n[]);

int main(void)
{
	int n[10];

	int *p = pass(n);

	printf("%p\n", p);
	
	return 0;
}

int *pass(int n[])
{
	printf("%p\n", n);

	return ++n;
}
