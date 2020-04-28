#include <stdio.h>

#define MAX 100

int prod(int * arr, int n)
{
		if (n == 0)
				return arr[n];

		return arr[n] * prod(arr, n-1);
}

int main(void)
{
		int inp, arr[MAX], pos = 0;
		
		printf("Enter a number: ");
		scanf("%d", &inp);

		while (inp != -1){
				arr[pos++] = inp;
				printf("Enter a number: ");
				scanf("%d", &inp);
		}

		printf("The product is %d\n", prod(arr, --pos));

		return 0;
}

		

