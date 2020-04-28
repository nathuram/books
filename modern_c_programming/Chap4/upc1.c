#include <stdio.h>

int main(void)
{
	int total = 19;
	total -= 1;
	total = total % 9;
	printf("%d\t", total);
	printf("%d\n", 9 - total);

	total = 19;
	printf("%d\t", total %= 10);
	printf("%d\n", 10-total);
}
