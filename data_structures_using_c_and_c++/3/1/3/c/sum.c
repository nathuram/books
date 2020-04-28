#include <stdio.h>

#define MAX 100

int sum(int * arr, int n)
{
		if (n == 0)
				return arr[n];

		return arr[n] + sum(arr, n-1);
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

		printf("The sum is %d\n", sum(arr, --pos));

		return 0;
}

		

