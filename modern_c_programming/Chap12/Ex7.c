#include <stdio.h>
#include <stdbool.h>

#define N 10

bool search(const int a[], int n, int key);

int main(void)
{
	int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int key;

	printf("Enter a number: ");

	scanf("%d", &key);

	switch(search(arr, N, key))
	{
		case true: printf("%d is in the array\n", key);
			   break;
		case false: printf("%d is not in the array\n", key);
			    break;
	}



	return 0;
}

bool search(const int a[], int n, int key)
{
	for (int *p = (int *) a; p < a + N; p++)
		if (key == *p)
			return true;

	return false;
}
