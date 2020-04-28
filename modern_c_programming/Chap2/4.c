#include <stdio.h>

int main(void)
{
	float d_and_c;

	printf("Enter an amount: ");	
	scanf("%f", &d_and_c);

	printf("With tax added: $%.2f\n", d_and_c  + (d_and_c/20.0) );
}
