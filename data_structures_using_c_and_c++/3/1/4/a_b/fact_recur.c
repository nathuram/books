#include <stdio.h>

int fact(int n)
{
		if (n == 1)
				return n;
		else
				return n * fact(n-1);
}

int main(void)
{
		int inp;
		printf("Enter a number: ");
		scanf("%d", &inp);

		printf("The factorial is %d\n", fact(inp));
		return 0;
}
