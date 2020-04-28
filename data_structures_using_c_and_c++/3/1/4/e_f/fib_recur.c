#include <stdio.h>

int fib(int n)
{
		if (n == 0 || n == 1)
				return n;
		else
				return fib(n-1) + fib(n-2);
}

int main(void)
{
		int inp;

		printf("Enter a number: ");
		scanf("%d", &inp);

		printf("The Fibonacci is %d\n", fib(inp));
		
		return 0;
}
