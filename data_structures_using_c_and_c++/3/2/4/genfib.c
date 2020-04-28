#include <stdio.h>

int fib(int f0, int f1, int k)
{
		if (k == 0)
				return f0;

		if (k == 1)
				return f1;

		return (fib(f0, f1, k-1) + fib(f0, f1, k-2));
}

int ifib(int f0, int f1, int k)
{
		int tmp, lowfib = f0, hifib = f1;
		for (int i = 0; i < k-1; i++){
				tmp = lowfib;
				lowfib = hifib;
				hifib = lowfib + tmp;
		}

		return hifib;
}

int main(void)
{
		int f0, f1, k;

		printf("Enter first number: ");
		scanf("%d", &f0);

		printf("Enter second number: ");
		scanf("%d", &f1);

		printf("Enter index: ");
		scanf("%d", &k);

		printf("Fibonacci(%d, %d, %d) = %d\n", f0, f1, k, fib(f0, f1, k));
		printf("Fibonacci(%d, %d, %d) = %d\n", f0, f1, k, ifib(f0, f1, k));

		return 0;
}
				
