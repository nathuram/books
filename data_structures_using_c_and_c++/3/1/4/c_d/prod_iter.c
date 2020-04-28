#include <stdio.h>

int prod(int a, int b)
{
		int prod = 0;
		for (int i = b; i > 0; i--)
				prod += a;

		return prod;
}

int main(void)
{
		int inp1, inp2;

		printf("Enter first number: ");
		scanf("%d", &inp1);

		printf("Enter second number: ");
		scanf("%d", &inp2);

		printf("The produce is %d\n", prod(inp1, inp2));

		return 0;
}

