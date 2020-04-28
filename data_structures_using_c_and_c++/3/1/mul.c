#include <stdio.h>

int mult(int a, int b)
{
		if (b == 1)
				return a;
		else
				return mult(a, b-1) + a;
}

int main(void)
{
		int a, b;

		printf("Enter first number: ");
		scanf("%d", &a);

		printf("Enter second number: ");
		scanf("%d", &b);

		printf("%d\n", mult(a, b));

		return 0;

}
