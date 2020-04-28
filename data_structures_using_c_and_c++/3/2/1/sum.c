// The program just calculates the sum of the first n terms

#include <stdio.h>
#include <color.h>


int func(int n)
{
		if (n == 0)
				return n;
		else
				return n + func(n-1);
}

int iter_func(int n)
{
		int sum = 0;
		for (int i = 0; i <= n; i++)
				sum += i;
		return sum;
}

int main(void)
{
		int n;
		printf("Enter a number: "GREEN );
		scanf("%d", &n);
		printf(COLOR_RESET);

		printf("The recursive solution is: " RED "%d\n" COLOR_RESET, func(n));
		printf("The iterative solution is: " RED "%d\n" COLOR_RESET, iter_func(n));

		return 0;
}

		
	
