#include <stdio.h>

#define MAX 100

int min(int * arr, int n)
{
		if (n == 0)
				return arr[n];

		int m = min(arr, n-1);

		if (arr[n] < m)
				return arr[n];
		else
				return m;
}

int main(void)
{
		int arr[MAX], inp, i = 0;
		printf("Enter a number: ");
		scanf("%d", &inp);

		while (inp != -1){
				arr[i++] = inp;
				printf("Enter a number: ");
				scanf("%d", &inp);
		}

		printf("The array is: ");
		for (int j = 0; j < i; j++)
				printf("%d ", arr[j]);
		printf("\n");

		printf("The minimum is %d\n", min(arr, --i));

		return 0;
}
