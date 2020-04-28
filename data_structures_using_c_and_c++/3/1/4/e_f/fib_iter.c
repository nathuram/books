#include <stdio.h>

int fib(int n)
{
		if (n <= 1)
				return n;

		int x, lowfib = 0, hifib = 1;
		for (int i = 2; i <= n; i++){
				x = lowfib;
				lowfib = hifib;
				hifib = x + lowfib;
		}

		return hifib;
}



int main(void)
{
		int inp;

		printf("Enter a number: ");
		scanf("%d", &inp);

		printf("The fibonacci is %d\n", fib(inp));

		return 0;
}
