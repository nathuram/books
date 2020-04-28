#include <stdio.h>
#include <color.h>

int choose (int n, int k)
{
		if (n < k)
				return 0;

		if (n == 1)
				return 1;
		
		if (k == 1)
				return n;

		return (choose(n-1, k-1) + choose (n-1, k));
}

int fact(int n)
{
		if (n == 1)
				return n;
		else
				return n * fact(n-1);
}

int choose2(int n, int k)
{
		return (fact(n) / (fact(k) * fact(n-k)));
}

int main(void)
{
		int n, k;

		printf("Enter a number: " GREEN);
		scanf("%d", &n);
		printf(COLOR_RESET);
		
		printf("Enter second number: " GREEN);
		scanf("%d", &k);
		printf(COLOR_RESET);

		printf(GREEN "%d " COLOR_RESET "choose " GREEN "%d " COLOR_RESET "is: " RED "%d\n" COLOR_RESET, n, k, choose(n, k));
		printf(GREEN "%d " COLOR_RESET "choose " GREEN "%d " COLOR_RESET "is: " RED "%d\n" COLOR_RESET, n, k, choose2(n, k));
		return 0;
}
