#include <stdio.h>

int main (void)
{
	int n = 21;
	if (n % 2 == 0);
		printf("n is even\n");
}

// The error here is the trailing ; after the if statement. This is a null statement, and there can only be one expression after an if (unless we use compound statements), the if is considered empty
