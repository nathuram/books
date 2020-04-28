#include <stdio.h>

int main(void)
{
		int inp, fact = 1;
		printf("Enter a number: ");
		scanf("%d", &inp);

		for (int i = inp; i > 0; i--)
				fact *= i;

		printf("The factorial is %d\n", fact);
		return 0;
}
