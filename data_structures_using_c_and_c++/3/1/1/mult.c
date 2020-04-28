#include <stdio.h>

int main(void)
{
		int a, b;

		printf("Enter first number: ");
		scanf("%d", &a);

		printf("Enter second number: ");
		scanf("%d", &b);

		int prod = 0;
		for (int i = b; i > 0; i--)
				prod += a;

		printf("%d\n", prod);

		return 0;
}
				
