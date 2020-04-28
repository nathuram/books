#include <stdio.h>

int main(void)
{
	int a, b, c, d, largest1, largest2, smallest1, smallest2;

	printf("Enter four integers: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if ( a > b)
	{
		largest1 = a;
		smallest1 = b;
	}
	else
	{
		smallest1 = a;
		largest1=b;
	}
	
	if (c > d)
	{
		largest2 = c;
		smallest2 = d;
	}
	else
	{
		largest2 = d;
		smallest2 = c;
	}

	
	largest1 > largest2 ? printf("LARGEST %d\n", largest1) : printf("LARGEST %d\n", largest2);
	smallest1 < smallest2 ? printf("SMALLEST %d\n", smallest1) : printf("SMALLEST %d\n", smallest2);
}

