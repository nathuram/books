#include <stdio.h>
#include <color.h>

int fib(int n, int *count)
{
		if (n == 0 || n == 1)
				return n;

		int x, lowfib = 0, hifib = 1;
		for (int i = 2; i <= n; i++){
				x = lowfib;
				lowfib = hifib;
				hifib = x + lowfib;
				(*count)++;
		}

		return hifib;
}


int main(void)
{
	for (int i = 0; i < 11; i++){
				int count = 0, f = fib(i, &count);
				printf("Fibonacci " RED "%d " COLOR_RESET "= " GREEN "%d " COLOR_RESET "and took " BLUE "%d " COLOR_RESET "additions\n", i, f, count);
	}

	return 0;
}

