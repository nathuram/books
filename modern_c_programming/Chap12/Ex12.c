#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);
void gen_random_arr(int *a, int n);

int main(void)
{
	srand(time(NULL));

	int n;
	printf("Enter size of array: ");
	scanf(" %d", &n);

	int arr[n];

	int largest, second_largest;

	gen_random_arr(arr, n);

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
	
	find_two_largest(arr, n, &largest, &second_largest);

	printf("The largest element is %d and the second largest element is %d\n\n", largest, second_largest);

	return 0;
}

void gen_random_arr(int *a, int n)
{
	for (int *p = (int *) a; p < a+n; p++)
		*p = rand();

	return ;
}


void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	*largest = *second_largest = *a;

	for (int *p = (int *) a+1; p < a + n; p++)
		if (*p > *largest)
			*largest = *p;

	for (int *p = (int *) a; p < a+n; p++)
		if (*p < *largest && *p > *second_largest)
			*second_largest = *p;
	return;
}
