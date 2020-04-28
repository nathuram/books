#include <stdio.h>
#define ARRAY_SIZE 40

int main(void)
{
	int fib[ARRAY_SIZE] = {0, 1};
	printf(" %d %d", fib[0], fib[1]);

	for (int a = 2; a < ARRAY_SIZE; a++){
		fib[a] = fib[a-1] + fib[a-2];
		printf(" %d", fib[a]);
	}

	printf("\n");
}

