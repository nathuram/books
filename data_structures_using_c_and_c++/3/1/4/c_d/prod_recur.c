#include <stdio.h>

int prod(int a, int b)
{
		if (b == 1)
				return a;
		else
				return a + prod(a, b-1);
}

int main(void)
{
		int inp1, inp2;

		printf("Enter a number: ");
		scanf("%d", &inp1);

		printf("Enter second number: ");
		scanf("%d", &inp2);

		printf("The produce is %d\n", prod(inp1, inp2));

		return 0;
}
