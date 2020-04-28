#include <stdio.h>
#include <color.h>

int fib(int n, int *count)
{
		if (n == 0 || n == 1)
				return n;

		(*count)++;
		
		return fib(n-1, count) + fib(n-2, count);
}

int main(void)
{
		for(int i = 0; i <= 10; i++){
				int count = 0, f = fib(i, &count);
				printf("Fibonacci " RED "%d " COLOR_RESET "= " GREEN "%d " COLOR_RESET "and took " BLUE "%d " COLOR_RESET "additions\n", i, f, count);
		}

		return 0;
}

