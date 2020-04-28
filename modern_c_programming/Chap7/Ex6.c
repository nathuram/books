#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("%d\n", 2);
	printf("%d\n", pow(2, sizeof(short)));
	printf("%d\n", pow(2, sizeof(int)));
	printf("%d\n", pow(2, sizeof(long int)));
}

