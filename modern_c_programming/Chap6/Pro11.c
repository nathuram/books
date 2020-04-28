#include <stdio.h>

int main(void)
{
	int n; float e=1.0;

	
	printf("Enter an integer: ");
	scanf("%d", &n);

	for (int a = 1; a <= n; a++){
		int product = 1;
		for (int b = 1; b <= a; b++){	
			product *= b; }
		e += 1.0f/product;
	}
	printf("The value of e is %.5f\n", e);
}


