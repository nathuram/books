#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
	int a[N], largest, second_largest;

	printf("Enter %d numbers: ", N);
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);

	find_two_largest(a, N, &largest, &second_largest);

	printf("The largest number is %d and the second largest is %d\n", largest, second_largest);
	
	return 0;


}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	*largest = *second_largest = 0;

	for (int i = 0; i < N; i++)
	{
		if (a[i] < *largest)
			if (a[i] > *second_largest)
				*second_largest = a[i];

		if (a[i] > *largest)
			*largest = a[i];
	}
	return ;
}


