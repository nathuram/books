#include <stdio.h>

int main(void)
{
	int x;

	printf("Enter a value for x: ");
	scanf("%d", &x);

	printf("The value of the polynomial for x = %d is %d\n", x, ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x -6  );
}
