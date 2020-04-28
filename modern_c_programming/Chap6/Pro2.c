#include <stdio.h>

int main(void)
{
	int a, b, swap;

	printf("Enter a number: ");
	scanf("%d" , &a);

	printf("Enter a number: ");
	scanf("%d", &b);

	if (b==0){
		printf("The GCD is %d\n", a);
		return 0;
	}

	while (b != 0){
		swap = b;
		b = a%b;
		a = swap;
	}

	printf("The GCD is %d\n", a);
	
	return 0;
}

		

	
