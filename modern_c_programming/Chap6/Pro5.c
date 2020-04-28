#include <stdio.h>

int main(void)
{
	int a;

	printf("Enter a number: ");
	scanf("%4d", &a);

	do{
		printf("%1d", a%10);
		a /= 10;
	}while (a != 0);
	printf("\n");
}
