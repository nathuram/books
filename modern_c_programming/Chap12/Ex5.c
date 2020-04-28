#include <stdio.h>

int main(void)
{
	int a[] = {0, 1, 2,};
	int *p;

	p = a;

	printf("p == a[0] %d\n\n", p == a[0]); //This is a mismatched type since we're comparing a pointer to an integer
	printf("p == &a[0] %d expected value is 1\n\n", p == &a[0]);
	printf("*p == a[0] %d expected value is 1\n\n", *p == a[0]);
	printf("p[0] == a[0] %d expected value is 1\n\n", p[0] == a[0]);

	return 0;
	

}
