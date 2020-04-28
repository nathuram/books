#include <stdio.h>

#define N 10

int *find_largest(int a[], int n);

int main(void)
{
	int a[N], *ptr_largest;

	printf("Enter numbes: ");

	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);

	ptr_largest = find_largest(a, N);

	printf("The pointer to the largest element of the array is %p\n", ptr_largest);
	printf("The largest element is %d\n", *ptr_largest);

	return 0;
}

int *find_largest(int a[], int n)
{
	int largest =a[0];
	int *ptr_largest;

	for (int i = 0; i < N; i++)
		if (a[i] > largest)
		{
			largest = a[i];
			ptr_largest = &a[i];
		}


	return ptr_largest;
}

		


		
