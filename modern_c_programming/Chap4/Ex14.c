#include <stdio.h>

int main(void)
{
	int a = 2; int b = 5; int c = 10; int d = 9; int e = 12;

	printf("%d %d\n", a * b - c * d + e, ( (a*b) - (c*d) + e));
	printf("%d %d\n", a / b % c / d, (a/b)%(c/d));
	printf("%d %d\n", -a -b +c - + d, (-a)-b+c-d);

	return 0;
}
