#include <stdio.h>

int bin (int n)
{
		if (n == 2)
				return 3;

		if (n == 3)
				return 5;
		
		return (bin(n-1) + bin(n-2));
}

int main(void)
{
		int n;
		printf("Enter a number: ");
		scanf("%d", &n);

		while (n != -1){
				printf("Binary sequences of length %d without two consecutive 1s is %d\n", n, bin(n));
				printf("Enter a number: ");
				scanf("%d", &n);
		}

		return 0;
}
		
