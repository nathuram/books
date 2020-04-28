#include <stdio.h>

#define MAX 100

int max(int * arr, int n)
{
		if (n == 0)
				return arr[n];

		int m = max(arr, n-1);
		
		if (arr[n] > m)
				return arr[n];
		else
				return m;
}

int main(void)
{
		int inp, i = 0, arr[MAX];
		printf("Enter a number: ");
		scanf("%d", &inp);

		while (inp != -1) {
				arr[i++] = inp;
				printf("Enter a number: ");
				scanf("%d", &inp);
		}

		printf("The array is: ");
		for (int j = 0; j < i; j++)
				printf("%d ", arr[j]);
		printf("\n");

		printf("The max element is %d\n", max(arr, i-1));
		
		return 0;
}
				
