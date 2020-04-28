#include <stdio.h>

#define MAX 100

float avg(float * arr, int n)
{
		if (n == 0)
				return arr[n];

		return ((avg(arr, n-1) * n ) + arr[n])/(n+1);
}

int main(void)
{
		float inp, arr[MAX];
		int pos = 0;

		printf("Enter a number: ");
		scanf("%f", &inp);

		while (inp != -1){
				arr[pos++] = inp;
				printf("Enter a number: ");
				scanf("%f", &inp);
		}

		printf("The avg is %0.2f\n", avg(arr, --pos));
		return 0;
}



