#include <stdio.h>

int main(void)
{
	int a;

	printf("Enter a number between 0 and 32767: ");
	scanf("%5d", &a);

	printf("In octal, your number is: %d%d%d%d%d\n",(a/4096)%8, (a/512)%8, (a/64)%8, (a/8)%8, (a%8));

	return 0;
}
